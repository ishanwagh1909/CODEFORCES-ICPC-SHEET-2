#include<bits/stdc++.h>
using namespace std ;

void digits(int n)
{
    string str= to_string(n);
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
}

signed main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        digits(n);
    }

}