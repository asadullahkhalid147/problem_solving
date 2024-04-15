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
        for(int i=0;i<n;i++)
        {
            int x,y;cin>>x>>y;
            v.push_back({x,y});
        }


        int ans=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(v[0].second<=v[i].second)
            {
                if(v[0].first<=v[i].first)
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
