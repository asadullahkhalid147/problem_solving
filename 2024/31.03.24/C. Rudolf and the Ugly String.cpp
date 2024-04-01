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
        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            if(s.substr(i,3)=="map" || s.substr(i,3)=="pie")
            {
                s[i+2]='z';
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
