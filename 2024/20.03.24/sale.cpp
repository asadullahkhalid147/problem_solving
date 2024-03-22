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
        vector<int>v(n);
        int mx=0;
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++)
        {
            mx=max(mx,v[i]);
        }
        int i=0;
        int sum=0,cnt=0;
        while(i<n)
        {
             sum+=v[i];
            if(v[i]==mx)break;
            i++;
        }
        sum+=mx;
        int j=0;
        while(j<n)
        {
            cnt+=v[j];
            j++;
        }
        cnt+=v[n-1];
        int ans=max(cnt,sum);

        cout<<ans<<endl;

    }
}
