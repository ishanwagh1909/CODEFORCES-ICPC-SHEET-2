#include <bits/stdc++.h>
using namespace std;

void shape_1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
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
    shape_1(n);
}