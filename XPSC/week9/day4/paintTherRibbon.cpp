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

    int t;cin>>t;
    while (t--)
    {
        int n,m,k;cin>>n>>m>>k;
        if (m*(n-k-1)>=n) yes;
        else no;
        /* code */
    }
    
    return 0;
}