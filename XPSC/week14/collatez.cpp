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

    int t;cin>>t;
    while (t--)
    {
        ll x,y,k;cin>>x>>y>>k;

        while(k>0 && x!=1)
        {
            ll ans=(x/y +1)*y - x;
            ans=max(1LL,ans);
            ans=min(ans,k);

            x+=ans;
            while (x%y==0)
            {
                x=x/y;
                /* code */
            }
            
            k-=ans;
        }

        cout<<x+k%(y-1)<<nl;
        /* code */
    }
    
    
    return 0;
}