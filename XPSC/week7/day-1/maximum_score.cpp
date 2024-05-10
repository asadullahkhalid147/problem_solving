#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int l=0,r=0;
            if(i>0)
            {
                l=abs(v[i]-v[i-1]);
            }
            if(i<n-1)
            {
                r=abs(v[i]-v[i+1]);
            }
            ans=min(ans,max(l,r));
        }
        /* code */
        cout<<ans<<endl;
    }
    
    return 0;
}