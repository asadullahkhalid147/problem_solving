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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x%10]++;
        }
        vector<int>a;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<min(mp[i],3);j++)
            {
                a.push_back(i);
            }
        }
        int flag=0;
        int m=a.size();
        for(int i=0;i<m-2;i++)
        {
            for(int j=i+1;j<m-1;j++)
            {
                for(int k=j+1;k<m;k++)
                {
                    if((a[i]+a[j]+a[k])%10==3)
                    {
                        flag=1;
                    }
                }
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
