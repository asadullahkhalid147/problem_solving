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
        int row,col,x,y,d;cin>>row>>col>>x>>y>>d;

        int flag=1,cnt=1;
        for(int i=1;i<=col;i++)
        {
            if(abs(1-x)+abs(i-y)<=d)flag=0;

            if(abs(row-x)+abs(i-y)<=d)cnt=0;
        }

        for(int i=1;i<=row;i++)
        {
            if(abs(i-x)+abs(col-y)<=d)flag=0;

            if(abs(i-x)+abs(1-y)<=d)cnt=0;
        }

        if(flag || cnt)
        {
            cout<<row-1+col-1<<nl;
        }
        else cout<<-1<<nl;
        /* code */
    }
    
    
    return 0;
}