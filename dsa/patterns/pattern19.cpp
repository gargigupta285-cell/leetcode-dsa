#include <bits/stdc++.h>
using namespace std;

void print19(int n)
{
    // int iniS = 0;

    // Upper Half
    for(int i = 0; i < n; i++)
    {
        // Left Stars
        for(int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // Middle Spaces
       
{
    for(int j = 0; j < 2*i; j++)
        cout << " ";
};

        // Right Stars
        for(int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // iniS = 2 * n - 2;

    // // Lower Half
    // for(int i = 1; i <= n; i++)
    // {
    //     // Left Stars
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     // Middle Spaces
    //     for(int j = 1; j <= iniS; j++)
    //     {
    //         cout << " ";
    //     }

    //     // Right Stars
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     iniS -= 2;
    //     cout << endl;
    // }
}

int main()
{
    int n;
    cin >> n;

    print19(n);

    return 0;
}