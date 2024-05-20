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

        string ans="";

        while (!s.empty())
        {
            int i;
            if(s.back()=='a' || s.back()=='e')
            {
                i=2;
            }
            else i=3;

            while (i--)
            {
                ans+=s.back();
                s.pop_back();
                /* code */
            }
            ans+='.';
            
            /* code */
        }
        ans.pop_back();
        reverse(ans.begin(),ans.end());

        for(auto it:ans)cout<<it;
        cout<<nl;
        
        /* code */
    }
    
    return 0;
}