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
        
        ll n,k;cin>>n>>k;
        vector<ll>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        ll l=0,r=2e9+10,mid;

        while (l<=r)
        {
            mid=l+(r-l)/2;
            ll ans=0;
            for(int i=0;i<n;i++)
            {
                if(vec[i]<mid)ans+=(mid-vec[i]);
            }
            if(ans>k) r=mid-1;
            else
            {
                l=mid+1;
            }
            /* code */
        }
        cout<<r<<nl;
        
        /* code */
    }
    
    return 0;
}