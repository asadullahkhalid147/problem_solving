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
        vector<int>a(n+1);
        vector<int>b(n+1);

        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<=n;i++)
        {
            b[a[i]]++;
        }
        for(int i=1;i<=n;i++)cout<<b[i]<<" ";cout<<nl;
        bool flag=true;

        int j=n;
        int i=1;
        int ans=n;
        while(i<=n)
        {
            // if(ans==0)break;
            cout<<ans<<" "<<a[i]<<" "<<b[a[i]]<<" "<<flag<<" "<<i<<nl;
            if(a[i]<=j)
            {
                if(b[a[i]]==0)
                {
                    flag=false;
                    break;
                }
                else
                {
                    ans=ans-b[a[i]];
                    i+=b[i];
                }
            }
            
        }
        cout<<flag<<" "<<ans<<nl;
        if(flag==false || ans!=0)
        {
            no;
        }
        else yes;

        /* code */
    }
    
    
    return 0;
}