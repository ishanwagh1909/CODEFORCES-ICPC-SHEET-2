#include <bits/stdc++.h>
using namespace std;

void some_sums(int n,int a,int b)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int no=i;
        int sum=0;
        while(no!=0)
        {
            int rem=no%10;
            sum=sum+rem;
            no=no/10;
        }
        if(sum>=a and sum<=b)
        {
            ans+=i;
        }
    }
    cout<<ans;
}

signed main()
{
    int n,a,b;
    cin>>n>>a>>b;
    some_sums(n,a,b);
}