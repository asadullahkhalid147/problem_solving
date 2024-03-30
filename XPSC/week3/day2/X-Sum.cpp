#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }

        int ci,cj,mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ci=i,cj=j;
                int cnt=0;
                while((ci>=0 && ci<n) && (cj>=0 && cj<m))
                {
                    cnt+=v[ci][cj];
                    ci--;
                    cj--;
                }
                ci=i,cj=j;
                while((ci>=0 && ci<n) && (cj>=0 && cj<m))
                {
                    cnt+=v[ci][cj];
                    ci--;
                    cj++;
                }
                ci=i,cj=j;
                while((ci>=0 && ci<n) && (cj>=0 && cj<m))
                {
                    cnt+=v[ci][cj];
                    ci++;
                    cj--;
                }
                ci=i,cj=j;
                while((ci>=0 && ci<n) && (cj>=0 && cj<m))
                {
                    cnt+=v[ci][cj];
                    ci++;
                    cj++;
                }
                cnt-=3*v[i][j];
                mx=max(mx,cnt);
            }
        }
        cout<<mx<<endl;
    }
}
