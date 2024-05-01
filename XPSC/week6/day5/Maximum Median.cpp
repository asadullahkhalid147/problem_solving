#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n,t;cin>>n>>t;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];


    sort(vec.begin(),vec.end());
    auto ok=[&](long long m)
    {

        ll cnt=0;
        for(int i=(n/2);i<n;i++)
        {
            if(vec[i]<m)cnt+=m-vec[i];
            else cnt+=0;
        }

        if(cnt<=t)
        {
            return true;
        }
        return false;
    };

    ll l=1,r=2e9,mid,ans;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }

    cout<<ans<<endl;
}
