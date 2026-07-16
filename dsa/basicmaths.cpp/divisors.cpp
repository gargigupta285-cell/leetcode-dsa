// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {

//         if (n % i == 0) {
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

// other less time method to find divisors of a number is to loop from 1 to sqrt(n) and check if n is divisible by i. If it is, then both i and n/i are divisors of n. This reduces the time complexity from O(n) to O(sqrt(n)).   

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> divisors;

    for (int i = 1; i <= sqrt(n); i++) {

        if (n % i == 0) {

            divisors.push_back(i);

            if (n / i != i)
                divisors.push_back(n / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    for (int x : divisors)
        cout << x << " ";

    return 0;
}