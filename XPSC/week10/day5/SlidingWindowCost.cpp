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
    vector<ll>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];


    pbds<ll>ml;
    for(int i=0;i<k;i++)
    {
        ml.insert(vec[i]);
    }
    int d=0;

    ll it=*ml.find_by_order((k+1)/2-1);
    ll cnt=0;
    for(int i=0;i<k;i++)cnt+=abs(vec[i]-it);
    
    cout<<cnt<<" ";
    for(int i=0;i<n-k;i++)
    {
        ml.erase(ml.find_by_order(ml.order_of_key(vec[i])));
        ml.insert(vec[i+k]);

        int knt=*ml.find_by_order((k+1)/2-1);
        cnt+=abs(knt-vec[i+k])-abs(vec[i]-it);

        
        if(k%2==0)
        {
            cnt-=knt-it;
        }
        it=knt;
        cout<<cnt<<" ";
        
    }
    return 0;
}


// https://codeforces.com/blog/entry/83295