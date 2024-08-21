#include<bits/stdc++.h>
using namespace std;

void histogram(char c,int n)
{
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        for(int j=0;j<x;j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}
signed main()
{
    char c;
    int n;
    cin>>c>>n;
    histogram(c,n);
}