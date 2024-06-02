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

    vector<int>a(n+1);

    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int>d(n+2);
    while (q--)
    {
        int l,r,x;cin>>l>>r>>x;
        d[l]+=x;
        d[r+1]-=x;        /* code */
    }

    for(int i=0;i<=n+1;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<nl;

    for(int i=1;i<=n;i++)
    {
        d[i]=d[i-1]+d[i];
    }

    for(int i=0;i<=n+1;i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<nl;
    
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]+d[i]<<" ";
    }
    cout<<nl;
    
    return 0;
}

// 5 3
// 2 5 1 8 13
// 1 3 4
// 2 5 7
// 1 5 2