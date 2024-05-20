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

    map<string,int>mp;
    int n,x;cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        string s;cin>>s;
        for(int f=1;f<x;f+=2)
        {
            s[f]=155-s[f];
        }
        mp[s]=i;
    }
    for(auto [x,y]:mp)
    {
        cout<<y<<" ";
    }
    // cout<<int('A');
    return 0;
}