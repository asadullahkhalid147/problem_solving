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
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        map<int,int>cnt;
        for(int i=0;i<n;i++)
        {
            cnt[a[i]]++;
        }
        ll ans=0;
        for(int i=n-1;i>=1;i--)
        {
            cnt[a[i]]--;
            int need=2*a[i];
            for(int j=2;j<=10;j++)
            {
                int x=j+a[i];
                int y=j*a[i];

                if((y-x)==need)
                {
                    if(cnt[j]>=1)
                    {
                        ans+=cnt[j];
                    }
                }
                else if((y-x)>need)break;
            }
        }
        cout<<ans<<endl;
    }
}
