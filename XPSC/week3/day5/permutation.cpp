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
        vector<vector<int>>permu(n,vector<int>(n-1));
        vector<int>cnt(n+1,0);
        vector<int>a(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>permu[i][j];
                if(j==0)cnt[permu[i][j]]++;
            }
        }

        for(int i=0;i<=n;i++)
        {
            if(cnt[i]==(n-1))
            {
                a[0]=i;
//                break;
            }
        }


        for(int i=0;i<n;i++)
        {
            if(permu[i][0]!=a[0])
            {
                for(int j=0;j<n-1;j++)
                {
                    a[j+1]=permu[i][j];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
