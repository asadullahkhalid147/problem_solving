#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long max_n = 1e9 + 5;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
     map<ll,int>mp;

    for (ll i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    ll ans;

   

    sort(v.begin(), v.end());
   

    if (v.size() == 2)
    {
        ans = v[0];
    }
    else
    {
        if (mp[v[0]] > 1)
        {

            ans = 2 * v[0];
        }
        else
        {

            ans = v[0] + v[1];
        }
    }
    cout << ans << endl;

    return 0;
}