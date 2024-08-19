#include <bits/stdc++.h>
using namespace std;
#define int long long

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        int fact=n;
        for(int i=n-1;i>=1;i--)
        {
            fact*=i;
        }
        return fact;
    }
}

signed main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int ans;
        ans=factorial(n);
        cout<<ans<<endl;
    }
}