#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll ans=0ll;
        int n;cin>>n;

        for(int i=1;i<=n/2;i++)
        {
            ans+=i*1ll*i;

        }
        cout<<ans*8<<endl;
    }
}
