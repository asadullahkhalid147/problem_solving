
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;
    ll k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll sum=0;
    int i=0,j=0,ans=0;
    while(j<n)
    {
        sum+=v[j];
        if(sum<=k)
        {
            ans=max(ans,j-i+1);

        }
        else
        {
            sum-=v[i];
            i++;
        }
        j++;
    }
    cout<<ans;
}
