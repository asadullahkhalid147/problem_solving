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
        vector<string>v(n*3);
        map<string,int>mp;
        for(int i=0;i<n*3;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int first=0,sec=0,thr=0;
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]]==1)first+=3;
            else if(mp[v[i]]==2)first++;
        }
        for(int i=n;i<2*n;i++)
        {
            if(mp[v[i]]==1)sec+=3;
            else if(mp[v[i]]==2)sec++;
        }
        for(int i=2*n;i<3*n;i++)
        {
            if(mp[v[i]]==1)thr+=3;
            else if(mp[v[i]]==2)thr++;
        }
        cout<<first<<" "<<sec<<" "<<thr<<"\n";
    }
}
