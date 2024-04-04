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
        for(int i=0;i<n;i++)cin>>a[i];
        bool flag=true;
        ll ans=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<0 && flag)
            {
                ans++;
                flag=false;
            }
            else if(a[i]>0)
            {
                flag=true;
            }
            cnt+=abs(a[i]);
        }
        cout<<cnt<<" "<<ans<<endl;
    }
}
