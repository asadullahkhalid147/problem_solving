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
        vector<vector<int>>a(n,vector<int>(k));

        string s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<k;j++)
            {
                a[i][j]=s[j]-'0';
                sum+=a[i][j];
            }
        }

        int cnt=0,mn=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<k-1;j++)
            {
                cnt=a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
                if(cnt==0)continue;
                mn=min(mn,max(1,cnt-1));
            }
        }
        if(sum==0)cout<<0<<endl;
        else cout<<1+sum-mn<<endl;
    }
}
