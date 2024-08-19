#include <bits/stdc++.h>
using namespace std;
#define int long long

string prime(int n)
{
    bool flag=false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=true;
        }
    }
    if(flag)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

signed main()
{
    int n;
    cin>>n;
    string ans;
    ans= prime(n);
    cout<<ans;
}