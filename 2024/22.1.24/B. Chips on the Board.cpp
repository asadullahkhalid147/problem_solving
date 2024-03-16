#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        ll sum1=0,sum2=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll mini=min(b[0]*n+sum1,a[0]*n+sum2);

        cout<<mini<<endl;
    }
}
