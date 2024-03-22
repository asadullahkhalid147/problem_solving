#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k,s;cin>>k>>s;ll cnt=0,m=0;
    vector<int>a(k+1,0);
    for(ll i=0;i<=k;i++)
    {
        for(ll j=0;j<=k;j++)
        {
            if(s-(i+j)<=k &&(s-(i+j))>=0)
            {
                // m++;
                // if(m==k)break;
                if(a[s-(i+j)]<=k+1)
                {
                    a[s-(i+j)]++;
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    return 0;
}