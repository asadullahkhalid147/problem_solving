#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    

    vector<ll>v(5);
    for(ll i=0;i<5;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll mx=0,mn=0;

    for(ll i=0;i<4;i++)
    {
        mn+=v[i];
    }
    for(ll i=1;i<5;i++)
    {
        mx+=v[i];
    }
    cout<<mn<<" "<<mx<<endl;
}