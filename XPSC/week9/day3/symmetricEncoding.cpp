#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        map<char,char>mp;

        set<char>ss;
        for(int i=0;i<n;i++)
        {
            ss.insert(s[i]);
        }
        string ans="";
        for(auto it:ss)
        {
            ans+=it;
        }
        int k=ans.size()-1;
        for(int i=0;i<=k;i++)
        {
            mp[ans[i]]=ans[k-i];
        }
        // for(auto [x,y]:mp)
        // {
        //     cout<<x<<' '<<y<<nl;
        // }

        for(int i=0;i<n;i++)
        {
            cout<<mp[s[i]];
        }
        cout<<nl;

        /* code */
    }
    
    return 0;
}