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
        int res=0;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        int ans=v[0];

        for(int i=1;i<n;i++)
        {
            res+=v[i]-ans;
        }
        cout<<res<<"\n";
    }
}
