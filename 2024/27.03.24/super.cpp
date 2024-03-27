#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {

        ll n,k,x;cin>>n>>k>>x;
        vector<ll>v(n+1);
        for(int i=1;i<k;i++)
        {
            v[i]=v[i-1]+i;
        }
        if(v[k-1]<x && n>=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
