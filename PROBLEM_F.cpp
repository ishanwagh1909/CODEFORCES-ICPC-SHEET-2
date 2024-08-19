#include <bits/stdc++.h>
using namespace std;
#define int long long

void multiplication_table(int n)
{
    for(int i=1;i<=12;i++)
    {
        int ans=n*i;
        cout<<n<<" * "<<i<<" = "<<ans<<endl;
    }
}

signed main()
{
    int n;
    cin>>n;
    multiplication_table(n);
}