#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        sort(vec.begin(),vec.end(),greater<int>());

        vector<ll>pref(n+1);
        for(int i=1;i<=n;i++)
        {
            pref[i]=pref[i-1]+vec[i-1];
        }

        while(k--)
        {
            int val;cin>>val;

            auto it=lower_bound(pref.begin(),pref.end(),val);
            if(it!=pref.end())
            {
                cout<<it-pref.begin()<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }

    }
}
