#include <bits/stdc++.h>
using namespace std;

void print7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch= 'A';
        // Print spaces
        for (int j = n-1; j > 0 ; j--)
        {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if(j<=i/2){
                cout<<ch;
                ch++;
            }
            else{
                cout<<ch;
                ch--;
            }
        }

        // Print spaces (optional)
        for (int j = n-1; j >0 ; j--)
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