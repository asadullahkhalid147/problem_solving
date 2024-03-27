#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<ll>a(n+1);
        vector<ll>b(n+1);

        ll ans=0;

        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)cin>>b[i];

        for(int i=n;i>m;i--)
        {
            ans+=min(a[i],b[i]);
        }
        vector<ll>pref(n+1);
        for(int i=1;i<=m;i++)
        {
            pref[i]=pref[i-1]+b[i];
        }
        ll mn=LLONG_MAX;
        for(int i=1;i<=m;i++)
        {
            mn=min(mn,a[i]+(pref[m]-pref[i]));
        }
        cout<<ans+mn<<endl;
    }
}
