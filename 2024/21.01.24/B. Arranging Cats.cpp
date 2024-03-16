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
        string s,m;
        cin>>s>>m;
        int sz=0,so=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==m[i])continue;
            else if(s[i]=='0')sz++;
            else if(s[i]=='1')so++;
        }
        int ans=min(sz,so)+abs(sz-so);
        cout<<ans<<endl;
    }
}
