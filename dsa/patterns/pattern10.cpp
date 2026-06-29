#include <bits/stdc++.h>
using namespace std;

void print10(int n)
{
    // Total rows = 2*n - 1
    for(int i = 1; i <= 2*n - 1; i++)
    {
        // Assume stars = current row number
        int stars = i;

        // After the middle row, decrease the stars
        if(i > n)
        {
            stars = 2*n - i;
        }

        // Print stars
        for(int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print10(n);

    return 0;
}