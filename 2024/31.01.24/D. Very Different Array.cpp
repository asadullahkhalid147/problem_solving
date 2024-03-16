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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(k);

        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<k; i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans=0;

        for(int i=0;i<n;i++)
        {
            ans+=max(abs(a[i]-b[k-i-1]),abs(a[i]-b[n-i-1]));
        }
        cout<<ans<<endl;


    }
}
