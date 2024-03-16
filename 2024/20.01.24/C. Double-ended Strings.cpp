#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int ans=0;
        string a,b;cin>>a>>b;
        int n=a.size();
        int m=b.size();


        for(int len=1;len<=min(n,m);len++)
        {
            for(int i=0;i+len<=n;i++)
            {
                for(int j=0;j+len<=m;j++)
                {
                    if(a.substr(i,len)==b.substr(j,len))
                    {
                        ans=max(ans,len);
                    }
                }
            }
        }
        cout<<a.size()+b.size()-(2*ans)<<endl;
    }
}
