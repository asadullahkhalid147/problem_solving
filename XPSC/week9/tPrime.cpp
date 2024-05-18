#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime(ll n)
{
    if(n==1)
    {
        return false;
    }

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    
    }
    return true;
}

bool isSquare(ll n)
{
    ll sqr=sqrtl(n);

    return (sqr*sqr==n);
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    
    for(int i=0;i<n;i++)
    {
        ll sqr=sqrtl(vec[i]);
        if(isPrime(sqr) && isSquare(vec[i]))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}