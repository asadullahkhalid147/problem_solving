#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    ll n,k,cnt=0L;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)cin>>v[i];

    ll i=0,j=0,sum=0,ans=0;

    while(j<n)
    {
        sum+=v[j];
        if(sum>=k)
        {
            ans++;
            while(sum>=k)
            {
                sum-=v[i];
                cnt+=v[i];
                i++;
                if(sum>=k)
                {
                    ans++;
                }
                else
                {
                    i=0;
                    sum+=cnt;
                    cnt=0L;
                    break;
                }
            }
        }
        j++;
    }
    cout<<ans;
}
