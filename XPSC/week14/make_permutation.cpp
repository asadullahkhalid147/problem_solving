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
    while(t--)
    {
        int n;cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());
        int ans=1;

        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==ans)
            {
                ans++;
            }
            else
            {
                if(vec[i]>ans)
                {
                    flag=false;
                }
                else{
                    ans++;
                }
            }
        }
        if(flag==false)no;
        else yes;
    }
    
    return 0;
}