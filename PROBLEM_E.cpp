#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin>>n;
    int max_no=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        max_no=max(max_no,num);
    }
    cout<<max_no;
}