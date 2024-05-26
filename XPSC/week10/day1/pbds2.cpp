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
    pbds<int>p;
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        p.insert(x);
    }

    int x=p.order_of_key(4);
    cout<<x<<nl;

    auto it = p.find_by_order(0);
    cout<<*it<<nl;
    for(auto val:p)
    {
        cout<<val<<" ";
    }
    cout<<nl;
    return 0;
}