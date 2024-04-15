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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        int ans=0;
        for(auto [x,y]:mp)
        {
            if(y==2)ans++;
        }
        cout<<ans<<endl;
    }
}
