#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,l,r;cin>>n>>l>>r;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        int ans=0, mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(vec[i]>=l && vec[i]<=r)
            {
                ans++;
                mx=max(ans,mx);
            }
            else
            {
                ans--;
                mn=min(ans,mn);
            }
        }
        if(mx==INT_MIN)
        {
            mx=0;
        }
        if(mn==INT_MIN)
        {
            mn=0;
        }
        cout<<mx<<" "<<mn<<endl;
    }
}
