#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;
    ll k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)cin>>v[i];

    ll i=0,j=0,ans=0;
    multiset<ll>ml;

    while(j<n)
    {
        ml.insert(v[j]);
        ll mx = *ml.rbegin();
        ll mn = *ml.begin();

        if((mx-mn)<=k)
        {
            ans+=(j-i+1);
        }
        else
        {
            while(i<j)
            {

                ll mx = *ml.rbegin();
                ll mn = *ml.begin();
                if((mx-mn)<=k)break;

                auto it=ml.find(v[i]);
                ml.erase(it);
                i++;
            }
            ll mx = *ml.rbegin();
            ll mn = *ml.begin();

            if((mx-mn)<=k)ans+=(j-i+1);

        }

        j++;
    }
    cout<<ans;
}

