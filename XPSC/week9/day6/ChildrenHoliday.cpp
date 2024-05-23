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

    int m,n;cin>>m>>n;
    vector<tuple<int,int,int>>vec(n);
    for(int i=0;i<n;i++)
    {
        int t,z,y;cin>>t>>z>>y;
        vec[i]=make_tuple(t,z,y);
    }


    vector<int>res(n);
    auto ok=[&](int mid)
    {
        int wow=m;
        vector<int>may(n);
        for(int i=0;i<n;i++)
        {
            tuple<int,int,int>T=vec[i];
            int t,z,y;
            t=get<0>(T);
            z=get<1>(T);
            y=get<2>(T);

            int total_time=t*z+y;

            int period=mid/total_time;
            int remain_time=mid%total_time;
            int total_ballon=(period*z)+min(z,remain_time/t);

            total_time=min(wow,total_ballon);
            wow-=total_time;
            may[i]=total_time;
        }

        if(!wow)
        {
            for(int i=0;i<n;i++)
            {
                res[i]=may[i];
            }
        }

        return(!wow);
    };


    int l=0,r=1e8,mid,ans;
    while (l<=r)
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
        /* code */
    }

    cout<<ans<<nl;
    for(auto val:res)
    {
        cout<<val<<" ";
    }
    
    return 0;
}