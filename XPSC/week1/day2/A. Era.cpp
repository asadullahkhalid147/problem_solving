#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];

        ll ans=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>(i+1+ans))
            {
//                cout<<v[i]<<" "<<i+1<<" "<<ans<<endl;
                ans+=v[i]-(i+1+ans);
            }
        }
        cout<<ans<<endl;
    }
}
