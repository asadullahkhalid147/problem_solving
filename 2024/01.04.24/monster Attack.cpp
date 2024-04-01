#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<ll>v(n),a(n);
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++)cin>>a[i];

        vector<ll>s(n+1);
        for(int i=0;i<n;i++)
        {
            s[abs(a[i])]+=v[i];
        }

        int flag=1;ll lft=0;
        for(int i=1;i<=n;i++)
        {
            lft+=k-s[i];
            if(lft<0)flag=0;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
