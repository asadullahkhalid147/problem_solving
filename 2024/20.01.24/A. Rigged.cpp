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
        vector<pair<int,int>>v;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int s,e;cin>>s>>e;
            v.push_back({s,e});
        }
        int ans=v[0].first;

        for(int i=1;i<n;i++)
        {
            if(v[0].second<=v[i].second)
            {
                if(ans<=v[i].first)
                {
                    ans=-1;
                }
                else
                {
                    continue;
                }
            }
        }
        cout<<ans<<endl;
    }
}
