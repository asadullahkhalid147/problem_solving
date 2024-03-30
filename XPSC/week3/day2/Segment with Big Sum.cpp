#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//using ll long long int;
const ll mod = 1e9 + 7;

int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    ll i=0,j=0,sum=0,ans=LLONG_MAX;

    while(j<n)
    {
        sum+=v[j];

        while(sum-v[i]>=k )
        {

            sum-=v[i];

            i++;
        }
        if(sum>=k)
            ans=min(ans,j-i+1);
        j++;


    }
    if(ans>n)cout<<-1;
    else cout<<ans;

}
