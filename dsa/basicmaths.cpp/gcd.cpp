
// #include <iostream>
// using namespace std;

// int main() {

//     int a, b;
//     cin >> a >> b;

//     int gcd = 1;

//     for (int i = 1; i <= min(a, b); i++) {

//         if (a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }

//     cout << gcd;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    for (int i = min(a, b); i >= 1; i--) {

        if (a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }
    }

    return 0;
}