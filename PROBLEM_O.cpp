#include<bits/stdc++.h>
using namespace std;

void pyramid(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

signed main()
{
    int n;
    cin>>n;
    pyramid(n);
}