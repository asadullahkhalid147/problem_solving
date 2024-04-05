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
        int ans=v[0];
        for(int i=1;i<n;i++)
        {
            ans=(ans^v[i]);
        }
        int res=ans;
        for(int i=0;i<n;i++)
        {
            res=min(res,ans^v[i]);
        }
        cout<<res<<endl;
    }
}
