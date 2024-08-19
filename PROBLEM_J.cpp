#include <bits/stdc++.h>
using namespace std;

void primes_1_to_n(int n)
{
    for(int i=2;i<=n;i++)
    {
        bool flag=true;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=false;
            }
        }
        if(flag)
        {
            cout<<i<<" ";
        }
    }
}
signed main()
{
    int n;
    cin>>n;
    primes_1_to_n(n);
}