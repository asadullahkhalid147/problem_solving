#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;
    ll k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll i=0,j=0;
    ll sum=0,ans=0;
    while(j<n)
    {
        sum+=v[j];
        if(sum<=k)
        {
            ans+=(j-i+1);
        }
        else
        {
            while(sum>k && i<j)
            {
                sum-=v[i];
                i++;
            }
            if(sum<=k)
            {
                ans+=(j-i+1);
            }
        }
        j++;
    }
    cout<<ans;
}
