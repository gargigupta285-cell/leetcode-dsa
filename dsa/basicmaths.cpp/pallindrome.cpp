#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int dup = n;        // Store original number
    int revNum = 0;

    while (n > 0) {

        int lastDigit = n % 10;

        revNum = (revNum * 10) + lastDigit;

        n = n / 10;
    }

    if (dup == revNum)
        cout << "True";
    else
        cout << "False";

    return 0;
}