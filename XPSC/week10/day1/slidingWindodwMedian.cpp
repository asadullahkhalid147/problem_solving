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

    int n,k;cin>>n>>k;
    vector<ll>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    pbds<pair<ll,int>>p;

    int i=0,j=0;
    while (j<n)
    {
        p.insert({vec[j],j});
        if((j-i+1)==k)
        {
            int pos=k/2;
            if(k%2==0)
            {
                pos--;
            }
            auto it=p.find_by_order(pos);
            cout<<it->first<<" ";
            p.erase({vec[i],i});
            i++;

        }
        j++;
    }
    
    
    return 0;
}