#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    map<ll,int>mp;

    ll first=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(vec[i])==mp.end())
        {
            mp.insert({vec[i],i});
        }
        else
        {
            if(mp[vec[i]]>=first)
            {
                first=mp[vec[i]]+1;
            }
            mp[vec[i]]=i;
        }
        ans=max(ans,i-first+1);
    }
    cout<<ans;
    return 0;
}