#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int j;
    for (ll i = 0; i < n; i++)
    {
        ll y=sqrt(vec[i]);

        for( j=2;j*j<y;j++)
        {
            if(vec[i]%j==0)break;
        }
        if(j*j>y && y*y==vec[i] && vec[i]>1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}