#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    ll n,t;
    cin>>n>>t;
    vector<ll>a(n);
    for(int i=0; i<n; i++)cin>>a[i];

    auto ok=[&](long long m)
    {
        long long total=0;
        for(int i=0; i<n; i++)
        {
            total+=(m/a[i]);
            if(total>=t)
            {
                return true;
            }
        }

        return false;
    };


    long long l=1,r=1e18,ans,mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}
