#include <bits/stdc++.h>
using namespace std;

void print8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        {
            for (int j = 1; j <= i-1; j++)
            cout << " ";
        }

        
        // Print stars
        for (int j = 1; j <= 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // Print trailing spaces (optional)
        for (int j = 1; j <= i-1; j++)
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

    print8(n);

    return 0;

    
}