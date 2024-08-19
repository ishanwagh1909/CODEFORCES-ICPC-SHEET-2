#include <bits/stdc++.h>
using namespace std;
#define int long long

void even_odd_positive_negative(int num,int &p_cnt,int &n_cnt,int &even_cnt,int &odd_cnt)
{
    if(num%2==0)
    {
        even_cnt+=1;
        if(num>0)
        {
            p_cnt+=1;
        }
        else if(num<0)
        {
            n_cnt+=1;
        }
    }
    else
    {
        odd_cnt+=1;
        if(num>0)
        {
            p_cnt+=1;
        }
        else if(num<0)
        {
            n_cnt+=1;
        }
    }
}

signed main()
{
    int n;
    cin>>n;
    int num;
    int p_cnt=0,n_cnt=0,even_cnt=0,odd_cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        even_odd_positive_negative(num,p_cnt,n_cnt,even_cnt,odd_cnt);
    }
    cout<<"Even: "<<even_cnt<<endl;
    cout<<"Odd: "<<odd_cnt<<endl;
    cout<<"Positive: "<<p_cnt<<endl;
    cout<<"Negative: "<<n_cnt;
}