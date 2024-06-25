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
        string s;cin>>s;
        s+="R";
        s="R"+s;
        // cout<<s<<nl;
        int j=0;
        int cnt=INT_MIN;int knt=0;
        while (j<s.size())
        {
            // cout<<s[j]<<nl;
            if(s[j]=='R')
            {
                knt++;
                j++;
                // cout<<"knt"<<knt<<" "<<"J"<<j<<" "<<s[j]<<nl;
                while( j<s.size()&&s[j]!='R')
                {
                    // cout<<"knt"<<knt<<" "<<"J"<<j<<" "<<s[j]<<nl;
                    knt++;
                    j++;
                    // cout<<"knt"<<knt<<" "<<"J"<<j<<" "<<s[j]<<nl;
                }
                // j+=knt;
                cnt=max(cnt,knt);
                knt=0;
            }
            else
            {
                j++;
                // cout<<"else j"<<j<<nl;
            }
            
            /* code */
        }
        cout<<cnt<<nl;
        
        
        /* code */
    }
    
    
    return 0;
}