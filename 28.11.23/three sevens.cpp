#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        map<int,int>m1;
        for(int i=1; i<=m; i++)
        {
            int n;
            cin>>n;
            int x;
            for(int j=0; j<n; j++)
            {
                cin>>x;
                m1[x]=i;
            }
        }
        map<int,int>m2;
        for(auto y:m1)
        {
            m2[y.second]=y.first;
        }
        if(m2.size()<m) cout<<"-1";
        else
        {
            for(auto p:m2)
            {
                cout<<p.second<<" ";
            }
        }
        cout<<endl;
    }
}
