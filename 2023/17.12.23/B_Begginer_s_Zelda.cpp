#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while (t--)
    {

        int n;cin>>n;
        int cnt=0;
        vector<vector<int>>v(n+1);
        for(int i=1;i<n;i++)
        {
            int a,b;cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            /* code */
        }
        for(int i=1;i<=n;i++)
        {
            if(v[i].size()==1) cnt++;
        }
        int d=(cnt+1)/2;
        cout<<d<<endl;
        
        /* code */
    }
    
    return 0;
}