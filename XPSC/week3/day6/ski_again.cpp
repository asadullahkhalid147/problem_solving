#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,q;cin>>n>>k>>q;
        vector<int>vec(n);
        ll res=0,ans=0;
        for(int i=0;i<n;i++)cin>>vec[i];

        for(int i=0;i<n;i++)
        {
            if(vec[i]<=q)
            {
                ans++;
            }
            else ans=0;

            if(ans>=k)res+=(ans-k+1);
        }
        cout<<res<<endl;
    }
}
