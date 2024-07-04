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
        int a[2]={0,0};
        string s;cin>>s;
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'0']++;
        }

        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(a[!(s[i]-'0')]>0)
            {
                a[!(s[i]-'0')]--;
            }
            else
            {
                ans=s.size()-i;
                break;
            }
        }
        cout<<ans<<nl;
        /* code */
    }
    
    return 0;
}