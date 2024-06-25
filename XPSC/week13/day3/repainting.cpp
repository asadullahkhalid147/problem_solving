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
        int n,k;cin>>n>>k;
        vector<int>vec(n+1);
        for(int i=1;i<=n;i++)cin>>vec[i];
        /* code */

        int ans=INT_MAX;

        for(int i=1;i<=100;i++)
        {
            int j=1;int cnt=0;
            while (j<=n)
            {
                if(vec[j]!=i)
                {
                    cnt++;
                    j+=k;
                }
                else j++;
                /* code */
            }
            ans=min(ans,cnt);
        }
        cout<<ans<<nl;


    }
    
    
    return 0;
}