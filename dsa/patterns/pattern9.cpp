#include <bits/stdc++.h>
using namespace std;

void print9(int n)
{
    // Upper Pyramid (Pattern 7)
    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // Spaces
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    // Lower Pyramid (Pattern 8)
    for(int i = 2; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= 2 * n - (2 * i - 1); j++)
        {
            cout << "*";
        }

        // Spaces
        for(int j = 1; j <= i - 1; j++)
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

    print9(n);

    return 0;
}