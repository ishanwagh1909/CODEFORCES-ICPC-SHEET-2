#include<bits/stdc++.h>
using namespace std ;

void sum_of_odd_numbers(int n,int m)
{
    int sum=0;
    int minimum=min(n,m);
    int maximum=max(n,m);
    for(int i=minimum+1;i<maximum;i++)
    {
        if(i%2==1)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
}

signed main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        sum_of_odd_numbers(x,y);
    }
}