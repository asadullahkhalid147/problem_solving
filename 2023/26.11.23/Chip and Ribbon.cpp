#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>a(n);
        ll cnt=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>cnt)
            {
                ans+=a[i]-cnt;
            }
            cnt=a[i];
        }
        cout<<ans-1<<endl;
    }
}
