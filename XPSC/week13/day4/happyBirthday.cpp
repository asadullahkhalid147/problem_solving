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
        int n;cin>>n;

        int flag=0,ans=0;
        for(int i=1;i<=9;i++)
        {
            flag=flag*10+1;
            
            for(int j=1;j<=9;j++)
            {
                if(flag*j<=n)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<nl;
        /* code */
    }
    
    
    return 0;
}