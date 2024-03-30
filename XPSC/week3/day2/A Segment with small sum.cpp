#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    ll i=0,j=0,sum=0,ans=0;
    while(j<n)
    {
        sum+=v[j];
        if(sum<=k)
        {
            ans=max(ans,j-i+1);
        }
        else
        {
            while(sum>k && i<=j)
            {
                sum-=v[i];
                i++;
            }
        }
        j++;
    }
    cout<<ans;
}
