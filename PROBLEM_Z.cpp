#include <bits/stdc++.h>
using namespace std;

void three_numbers(int k,int s)
{
    int cnt = 0;
    for(int x = 0; x <= k; x++)
    {
        for(int y = 0; y <= k; y++)
        {
            if(s - (x + y) <= k && (s - (x + y)) >= 0)
            {
                cnt += 1;
            }
        }
    }
    cout << cnt << endl;
}

signed main()
{
    int k,s;
    cin>>k>>s;
    three_numbers(k,s);
}

