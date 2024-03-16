#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    ll n,k;cin>>n>>k;
    ll v[1000];
    ll mn=INT_MAX;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mn=min(mn,v[i]);
        sum+=v[i];
    }
    if(k>sum)cout<<-1<<endl;
    else
    {
        cout<<min(mn,(sum-k)/n)<<endl;
    }


}
