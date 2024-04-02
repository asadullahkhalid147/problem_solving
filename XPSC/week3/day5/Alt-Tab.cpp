#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    vector<string>v(n);
    vector<string>a;

    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    reverse(v.begin(),v.end());

    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(mp[v[i]])
        {
            a.push_back(v[i]);
            mp[v[i]]=0;
        }
    }

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i].substr(a[i].size()-2,2);
    }


}
