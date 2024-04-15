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
            mp[__lg(v[i])]++;
        }
        ll mx=0;
        for(auto it:mp)
        {
            int m=it.second;
            mx+=(1LL*


                 m*(m-1)/2);
        }
        cout<<mx<<endl;
    }
}
