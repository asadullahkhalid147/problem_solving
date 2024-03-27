#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,k,x;cin>>n>>k>>x;

        ll ans=((k-1L)*k)/2L;

        cout<<ans<<endl;
        if(ans<x && n>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
