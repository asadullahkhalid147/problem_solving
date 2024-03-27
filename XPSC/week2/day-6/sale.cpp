#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++)cin>>v[i];
        vector<ll>pref(n+1);
        for(int i=1;i<=n;i++)
        {
            pref[i]=pref[i-1]+v[i];
        }
        for(int i=1;i<=n;i++)
        {
            pref[i]+=v[i];
        }
        ll mn=LLONG_MIN;
        for(int i=1;i<=n;i++)
        {
            mn=max(mn,pref[i]);
        }
        cout<<mn<<endl;

    }
}
