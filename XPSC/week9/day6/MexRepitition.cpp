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
        ll n,k;cin>>n>>k;
        vector<ll>vec(n+1);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            sum+=vec[i];
        }

        vec[n]=(n*(n+1)/2)-sum;

         k=k%(n+1);
        for(int i=0;i<n;i++)
        {
            cout<<vec[((i-k)+(n+1))%(n+1)]<<" ";
        }
        cout<<nl;
        /* code */
    }
    
    return 0;
}