#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,d,w;cin>>n>>k>>d>>w;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            a.push_back(x);
        }
        int ans=1,u=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]-a[u]>d+w || i-u+1>k)
            {
                ans++;
                u=i;
            }
        }
        cout<<ans<<endl;
    }
}
