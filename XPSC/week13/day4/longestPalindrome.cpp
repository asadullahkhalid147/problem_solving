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

    int n,m;cin>>n>>m;
    set<string>str;
    vector<string>s(100);
    vector<string>left,right;

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        str.insert(s[i]);
    }

    string mid;
    for(int i=0;i<n;i++)
    {
        string rep=s[i];
        reverse(rep.begin(),rep.end());

        if(s[i]==rep && mid.size()<=rep.size())
        {
            mid=rep;
        }
        else
        {
            if(str.find(rep)!=str.end())
            {
                left.push_back(s[i]);
                right.push_back(rep);
                str.erase(s[i]);
                str.erase(rep);
            }
        }
    }
    cout<<right.size()*m*2+mid.size()<<nl;
    for(int i=0;i<left.size();i++)
    {
        cout<<left[i];
    }
    cout<<mid;
    reverse(right.begin(),right.end());
    for(int i=0;i<right.size();i++)
    {
        cout<<right[i];
    }
    
    return 0;
}