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
    vector<int>a;
    vector<int>b(n);

    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int x=0;

    for(int i=0;i<n;i++)
    {
        a.push_back(b[i]+x);
        x=max(x,b[i]+x);
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    
    return 0;
}