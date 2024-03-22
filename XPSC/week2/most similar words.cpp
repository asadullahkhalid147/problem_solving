#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        int ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k=0;int cnt=0;
                string first=v[i];
                string second=v[j];
                while(k<first.size())
                {
                    cnt+=abs(first[k]-second[k]);
                    k++;
                }
                ans=min(ans,cnt);
            }
        }
        cout<<ans<<endl;
    }
}
