#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    int gcd_ele=0;
    int min_no=min(a,b);
    for(int i=1;i<=min_no;i++)
    {
        if(a%i==0 and b%i==0)
        {
            gcd_ele=max(gcd_ele,i);
        }
    }
    return gcd_ele;
}
signed main()
{
    int a,b;
    cin>>a>>b;
    int ans;
    ans=gcd(a,b);
    cout<<ans;
}