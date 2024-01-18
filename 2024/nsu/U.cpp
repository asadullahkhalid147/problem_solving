#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,a,b,ans;cin>>n>>k;

    ans=(n+k)/2;
    a=abs(n-ans);
    b=abs(k-ans);

    if(a==b)cout<<ans;
    else cout<<"IMPOSSIBLE";
    return 0;
}