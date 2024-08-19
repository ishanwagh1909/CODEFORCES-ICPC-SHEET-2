#include <bits/stdc++.h>
using namespace std;
#define int long long

string palindrome(int n)
{
    int rem,reverse=0,num=n;
    while(num!=0)
    {
        rem=num%10;
        reverse=(reverse*10)+rem;
        num/=10;
    }
    if(reverse==n)
    {
        string str= to_string(reverse);
        string ans=str+"\nYES";
        return ans;
    }
    else
    {
        string str= to_string(reverse);
        string ans=str+"\nNO";
        return ans;
    }
}

signed main()
{
    int n;
    cin>>n;
    string ans;
    ans=palindrome(n);
    cout<<ans;
}