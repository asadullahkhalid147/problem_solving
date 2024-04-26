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
        vector<ll>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt=max(0LL,cnt+vec[i]);
        }
        cout<<cnt<<endl;
    }
}
