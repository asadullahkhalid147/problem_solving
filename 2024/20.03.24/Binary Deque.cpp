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
        vector<int>a(n),v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        a[0]=v[0];
        for(int i=1;i<n;i++)
        {
            a[i]=v[i]+a[[i-1];
        }

        for(int i=0;i)
    }
}
