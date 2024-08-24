#include <bits/stdc++.h>
using namespace std;

void convert_to_decimal(int n)
{
    int cnt=0;
    while(n!=0)
    {
        int remainder=n%2;
        if(remainder==1)
        {
            cnt++;
        }
        n=n/2;
    }
    int sum=1;
    int ans=0;
    for(int i=0;i<cnt;i++)
    {
        if(i==0)
        {
            sum=1;
            ans+=sum;
        }
        else
        {
            sum *= 2;
            ans += sum;
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin >> n;
        convert_to_decimal(n);
    }
}