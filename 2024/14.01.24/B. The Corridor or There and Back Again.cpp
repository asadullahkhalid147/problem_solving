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
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int a,b;cin>>a>>b;
            ans=min(ans,(a+(b-1)/2));
        }
        cout<<ans<<endl;
    }
}
