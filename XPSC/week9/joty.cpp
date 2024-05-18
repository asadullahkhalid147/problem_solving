#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(int a,int b)
{
    return __gcd(a,b);
}

ll lcm(int a, int b)
{
    return ((a/gcd(a,b))*b);
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b,p,q;cin>>n>>a>>b>>p>>q;
    
    ll ans=0;
    ans+=(n/a)*p;
    ans+=(n/b)*q;

    ll comm=n/lcm(a,b);
    ans-=(comm*(p+q));
    ans+=(comm*max(p,q));

    cout<<ans;
    return 0;
}