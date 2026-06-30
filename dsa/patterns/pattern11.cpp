#include <bits/stdc++.h>
using namespace std;

void print11(int n)
{
    int start;

    for(int i = 0; i < n; i++)
    {
        // Decide first number of each row
        if(i % 2 == 0)
            start = 1;
        else
            start = 0;

        // Print the row
        for(int j = 0; j <= i; j++)
        {
            cout << start;

            // Flip 0 to 1 and 1 to 0
            start = 1 - start;
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;

    print11(n);

    return 0;
}