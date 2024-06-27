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

    string s,t;cin>>s>>t;
    

    int k=s.size();
    int m=t.size();

    int n;
    if(k>m)
    {
        n=m;
    }
    else n=k;

    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        // cout<<s.back()<<" "<<t.back()<<nl;
        if(s.back()==t.back())
        {
            ans++;
            s.pop_back();
            t.pop_back();
        }
        else
        {
            break;
        }
    }
    
    // cout<<k<<" "<<m<<" "<<ans<<nl;
    cout<<(k+m)-(ans*2);
    
    return 0;
}