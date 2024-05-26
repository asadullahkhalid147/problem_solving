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
template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//set = less ;; multiset = less_equal

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;cin>>n>>m;vector<int>vec(n);for(int i=0;i<n;i++)cin>>vec[i];vector<int>b(m);for(int i=0;i<m;i++)cin>>b[i];

    pbds<ll>p;

    for(int i=0;i<n;i++)
    {
        p.insert(vec[i]);
    }

    
    for(int i=0;i<m;i++)
    {
        cout<<p.order_of_key(b[i]+1)<<" ";
    }
    
    return 0;
}