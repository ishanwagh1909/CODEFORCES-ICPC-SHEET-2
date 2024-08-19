#include <bits/stdc++.h>
using namespace std;
#define int long long

void even_numbers(int n)
{
    if(n==1)
    {
        cout<<-1;
    }
    else
    {
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<endl;
        }
    }
}
signed main()
{
    int n;
    cin>>n;
    even_numbers(n);
}