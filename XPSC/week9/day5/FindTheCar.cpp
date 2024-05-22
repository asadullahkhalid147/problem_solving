#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        ll n,k,q,ans;cin>>n>>k>>q;

        vector<ll>a(k+1);
        vector<ll>b(k+1);
        a[0]=0;
        b[0]=0;

        for(int i=1;i<=k;i++)cin>>a[i];
        for(int i=1;i<=k;i++)cin>>b[i];

        while (q--)
        {
            ll d;cin>>d;
            ll l=0,r=k;
            

            while (l<=r)
            {
                ll mid=(l+r)>>1;
                if(a[mid]>d)
                {
                    r=mid-1;
                    // cout<<"*"<<nl;
                }
                else
                {
                    l=mid+1;
                    // cout<<"^"<<nl;
                }
                /* code */
            }
            if(a[r]==d)
            {
                cout<<b[r]<<" ";
                continue;
            }                
            ans=b[r]+((b[r+1]-b[r])*(d-a[r]))/(a[r+1]-a[r]);
        
            cout<<ans<<" ";
            /* code */
        }
        cout<<nl;
        /* code */
    }
    
    return 0;
}