#include <bits/stdc++.h>
using namespace std;

void lucky(int a,int b)
{
    int temp,initial_x,cnt=0;
    initial_x=a;
    for(int i=a; i<=b; i++)
    {
        temp=i;
        bool flag=true;
        while(temp>0)
        {
            int rem=temp%10;
            if(rem!=4 and rem!=7)
            {
                flag=false;
            }
            temp/=10;
        }
        if(flag)
        {
            cout<<i<<" ";
        }
        else
        {
            cnt++;
            if(cnt==b-initial_x+1)
            {
                cout<<"-1";
            }
        }
    }
}

signed main()
{
    int x,y;
    cin>>x>>y;
    lucky(x,y);
}