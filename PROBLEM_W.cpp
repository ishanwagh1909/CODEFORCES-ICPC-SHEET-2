#include <bits/stdc++.h>
using namespace std;

void shape_3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++)
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
    shape_3(n);
}