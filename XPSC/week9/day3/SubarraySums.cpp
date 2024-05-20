#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;cin>>n>>k;
    vector<ll>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    ll sum=0,cnt=0;
    map<ll,int>mp;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        sum+=vec[i];
        cnt+=mp[sum-k];
        mp[sum]++;
    }
    cout<<cnt<<nl;
    return 0;
}