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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(n==1)
        {
            for(int i=0;i<n;i++)cout<<a[i]<<endl;
            continue;
        }

        int x=n;

        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                x--;
            }
            else break;
        }

        if(x==0)
        {
            for(int i=n-1;i>=1;i--)cout<<i<<" ";
            cout<<n<<endl;
            continue;
        }

        int start;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)start=i-1;
            break;
        }

        if(start==n-2)start++;


        int r=start;
        vector<int>ans;

        for(int l=start;l>=0;l--)
        {
            vector<int>dex;
            for(int i=start+1;i<n;i++)
            {
                dex.push_back(a[i]);
            }
            for(int i=r;i>=l;i--)
            {
                dex.push_back(a[i]);
            }
            for(int i=0;i<l;i++)
            {
                dex.push_back(a[i]);
            }

            if(ans.empty())
            {
                ans=dex;
            }
            else ans=max(ans,dex);
        }
        int l=0;
        for(int r=0;r<n;r++)
        {
            vector<int>dex;
            for(int i=r+1;i<n;i++)
            {
                dex.push_back(a[i]);
            }
            for(int i=r;i>=1;i--)
            {
                dex.push_back(a[i]);
            }
            if(ans.empty())
            {
                ans=dex;
            }
            else
            {
                ans=max(ans,dex);
            }
        }
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
}
