#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int mx=2,ans=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                mx++;
            }
            else
            {
                mx=2;
            }
            ans=max(mx,ans);
        }
        if(s.size()==1)cout<<2<<endl;
        else cout<<ans<<endl;
    }
}
