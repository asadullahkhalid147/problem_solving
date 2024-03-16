#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;

        vector<int>v(n);
        for(int i=1;i<=k;i++)
        {
            int x;cin>>x;
            v[x-1]++;
        }

        for(int i=n-1;i>0;i--)
        {
            v[i-1]+=v[i];
        }
        vector<int>res(26,0);
        for(int i=0;i<n;i++)
        {
            res[s[i]-'a']++;
            res[s[i]-'a']+=v[i];
        }
        for(int i=0;i<26;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
}
