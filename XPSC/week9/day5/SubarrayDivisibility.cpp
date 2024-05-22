#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;

const int maxN=2e5;
ll freq[maxN];

int n;
ll mod(ll x)
{
    return (x%n +n)%n;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    ll cnt=0,ans=0;

    freq[0]=1;
    for(int i=0;i<n;i++)
    {
        ans=mod(ans+vec[i]);
        cnt+=freq[ans];;
        freq[ans]++;
    }
    cout<<cnt<<nl;
    return 0;
}