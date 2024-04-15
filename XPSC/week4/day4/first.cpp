#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x,y;cin>>n>>x>>y;
        int ans=min((((n/2)*y+(n%2)*x)),(n*x));
        cout<<ans<<endl;
    }
}
