#include <bits/stdc++.h>
using namespace std;

void print7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // Print spaces (optional)
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print7(n);

    return 0;
}