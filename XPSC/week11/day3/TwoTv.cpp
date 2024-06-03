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

    int n;cin>>n;
    map<int,ll>mp;

    for(int i=0;i<n;i++)
    {
        int l,r;cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    bool ok=true;
    ll ans=0;
    for(auto [x,y]:mp)
    {
        
        ans+=y;
        if(ans>2)
        {
            ok=false;
            break;
        }
    }
    if(ok)yes;
    else no;    
    return 0;
}