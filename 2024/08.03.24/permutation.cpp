#include<bits/stdc++.h>
using namespace std;
int max_n=1e4+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        /* code */
        vector<int>a(max_n+1,0);
        int f=0;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            a[x]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0)f++;
        }
        if(f>k)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}