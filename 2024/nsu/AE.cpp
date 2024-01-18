#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    vector<long long int>dp(n+1,1);
    for(int i=2;i<=n;i++)
    {
        dp[i]=i*dp[i-1];
    }
    return dp[n];
}
int main()
{
    int q;cin>>q;
    while (q--)
    {
        int n;cin>>n;
        long long ans=fact(n);
        cout<<ans<<endl;
        /* code */
    }
    
    return 0;
}