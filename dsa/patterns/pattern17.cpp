#include <bits/stdc++.h>
using namespace std;

void print17(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch='A';

        // spaces
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        // letters
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<ch;

            if(j<i)
                ch++;
            else
                ch--;
        }

        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    print17(n);
}