#include <bits/stdc++.h>
using namespace std;

void pum(int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            ans++;
            if(ans%4==0)
            {
                cout<<"PUM";
            }
            else
            {
                cout<<ans<<" ";
            }
        }
        cout<<endl;
    }
}

signed main()
{
    int n;
    cin>>n;
    pum(n);
}