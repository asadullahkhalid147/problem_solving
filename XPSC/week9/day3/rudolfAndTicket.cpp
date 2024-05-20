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
        vector<int>vec(n);
        vector<int>a(m);

        for(int i=0;i<n;i++)cin>>vec[i];
        for(int i=0;i<m;i++)cin>>a[i];

        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vec[i]+a[j]<=k)cnt++;
            }
        }
        cout<<cnt<<nl;
            /* code */
        }
    
    return 0;
}