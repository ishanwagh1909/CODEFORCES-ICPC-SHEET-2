#include <bits/stdc++.h>
using namespace std;

int seq_of_nums_and_sums()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n>0 and m>0)
        {
            int sum=0;
            int minimum=min(n,m);
            int maximum=max(n,m);
            for(int i=minimum;i<=maximum;i++)
            {
                cout<<i<<" ";
                sum+=i;
            }
            cout<<"sum ="<<sum<<endl;
        }
        else
        {
            return 0;
        }
    }
}

signed main()
{
    seq_of_nums_and_sums();
}