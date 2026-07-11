#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 1;

    while (n > 0)
    {
        int x = n % 10;

        cout << count << endl;

        n /= 10;

        count++;
    }

    return 0;
}

// 2nd method
// #include <cmath>

// class Solution {
// public:
//     int countDigit(int n) {

//         return (int)(log10(n) + 1);
//     }
// };