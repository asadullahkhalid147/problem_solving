#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int>q;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            q[x]=i;
        }
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(q[i+1]<q[i])cnt++;
        }
        cout<<cnt<<endl;
    }
}
