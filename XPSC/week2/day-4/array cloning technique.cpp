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
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        for(auto [x,y]:mp)
        {
            cnt=max(cnt,y);
        }
        int res=0;
        while(cnt<n)
        {
            int ans=min(cnt,n-cnt);
            res+=1+ans;
            cnt+=ans;
        }
        cout<<res<<endl;


    }
}
