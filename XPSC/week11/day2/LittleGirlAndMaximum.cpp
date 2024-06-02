#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
template<typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//set = less ;; multiset = less_equal

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;cin>>n>>q;
    vector<ll>vec(n+1);
    for(int i=1;i<=n;i++)cin>>vec[i];

    vector<ll>cnt(n+2);
    while (q--)
    {
        ll l,r;cin>>l>>r;
        cnt[l]++;
        cnt[r+1]--;
        /* code */
    }

    // for(int i=0;i<=n+1;i++)
    // {
    //     cout<<cnt[i]<<" ";
    // }
    // cout<<nl;

    for(int i=1;i<=n;i++)
    {
        cnt[i]=cnt[i-1]+cnt[i];
    }

    sort(vec.begin(),vec.end(),greater<int>());
    sort(cnt.begin(),cnt.end(),greater<int>());
    
    // for(int i=0;i<=n+1;i++)
    // {
    //     cout<<cnt[i]<<" ";
    // }
    // cout<<nl;

    // for(int i=0;i<=n;i++)cout<<vec[i]<<" ";

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=cnt[i]*vec[i];
    }
    cout<<ans<<nl;
    
    return 0;
}