#include<bits/stdc++.h>
using namespace std ;

void shape_2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
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
    shape_2(n);
}