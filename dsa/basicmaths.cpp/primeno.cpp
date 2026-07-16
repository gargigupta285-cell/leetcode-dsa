// brute force w/o sqrt
// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     if (n <= 1) {
//         cout << "false";
//         return 0;
//     }

//     bool isPrime = true;

//     for (int i = 2; i < n; i++) {

//         if (n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }

//     if (isPrime)
//         cout << "true";
//     else
//         cout << "false";

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= sqrt(n); i++) {

        if (n % i == 0) {

            count++;

            if (n / i != i)
                count++;
        }
    }

    if (count == 2)
        cout << "true";
    else
        cout << "false";

    return 0;
}