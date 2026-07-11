class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long  rev = 0;
        int n = x;

        while (n > 0) {
            int ld=n%10;

            rev = rev * 10 +ld ;
            n /= 10;
        }

        return rev == x;
    }
};