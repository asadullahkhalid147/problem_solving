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
template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
//set = less ;; multiset = less_equal
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n,k;cin>>n>>k;
    pbds<pair<int,int>>p;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
 
    int i=0,j=0;
    while (j<n)
    {
        ll cnt=0;
        p.insert({vec[j],j});
        if(j-i+1==k)
        {
            int pos=k/2;
            if(k%2==0)
            {
                pos--;
            }
 
            auto it=p.find_by_order(pos);
            int wow=it->first;
 
            for(int x=i;x<=j;x++)
            {
                cnt+=abs(vec[x]-wow);
            }
 
            p.erase({vec[i],i});
            i++;
            cout<<cnt<<" ";
        }
        j++;
        /* code */
    }
    
    
    
    return 0;
}