#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    vector<int>odd;
    vector<int>even;

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x&1)odd.push_back(x);
        else even.push_back(x);
    }

    ll ans=0;
    for(int i=0;i<even.size();i++)ans+=even[i];
    sort(odd.begin(),odd.end());

    if(odd.size()&1)
    {
        for(int i=1;i<odd.size();i++)ans+=odd[i];
    }
    else
    {
        for(int i=0;i<odd.size();i++)ans+=odd[i];
    }
    cout<<ans<<endl;
}
