#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;ll ans;
        for(int i=0;i<31;i++)
        {
            if(((n>>i)&1)==1)
            {
                ans=i;
            }
        }
        cout<<(1<<ans)-1<<endl;
    }
}
