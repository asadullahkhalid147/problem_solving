#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,f,a,b;cin>>n>>f>>a>>b;
        ll arr[n];
        for(ll i=0;i<n;i++)cin>>arr[i];
        ll val=0;

        for(ll i=0;i<n;i++)
        {
            f=max((f-b),(f-((arr[i]-val)*a)));
            val=arr[i];
        }
        if(f<=0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
