#include <bits/stdc++.h>
using namespace std;

void divisors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
}
signed main()
{
    int n;
    cin>>n;
    divisors(n);
}