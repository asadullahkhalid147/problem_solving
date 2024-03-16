#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int m;cin>>m;
    int n=m-1;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    sort(v.begin(),v.end());
    int ans;
    for(int i=0;i<n;i++)
    {
        if(i+1!=v[i])
        {
            ans=i+1;break;
        }
        else
        {
            ans=n+1;
        }
    }
    cout<<ans<<endl;
}
