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


ll vec[100004],b[100004],c[100004],d[100004],l[100004],r[100004];
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k;cin>>n>>m>>k;

    

    for(int i=1;i<=n;i++)
    {
        cin>>vec[i];
    }

    for(int i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>d[i];
    }
    while (k--)
    {
        /* code */
        ll x,y;cin>>x>>y;
        b[x]++;
        b[y+1]--;
    }
    
    for(int i=1;i<=m;i++)
    {
        b[i]=b[i-1]+b[i];
    }

    
    for(int i=1;i<=m;i++)
    {
        c[l[i]]+=b[i]*d[i];
        c[r[i]+1]-=b[i]*d[i];
    }


    for(int i=1;i<=n;i++)
    {
        c[i]=c[i-1]+c[i];
    }


    for(int i=1;i<=n;i++)
    {
        cout<<c[i]+vec[i]<<" ";
    }
    

    
    return 0;
}