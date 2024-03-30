#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;cin>>n>>q;
        vector<int>v(n+1,0);
        vector<int>a(n+1,0);
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            v[i]=v[i-1]+a[i];
        }

        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            if(((v[n]+(r-l+1)*k)-(v[r]-v[l-1]))&1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
