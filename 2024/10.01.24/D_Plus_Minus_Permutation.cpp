#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

ll sum(ll n)
{
    return (n*(n+1))/2;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,x,y;cin>>n>>x>>y;
        ll lc=(x*y)/__gcd(x,y);

        ll a=n/x;
        ll b=n/y;
        ll c=n/lc;

        ll a1=a-c;
        ll b1=b-c;

        cout<<(sum(n)-sum(n-a1))-sum(b1)<<endl;

    }
}
