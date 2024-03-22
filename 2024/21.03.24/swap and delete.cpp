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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        for(int i=0;i<n-2;i++)
        {
            if(v[i]<0)break;
            v[i+1]-=2*v[i];
            v[i+2]-=v[i];
            v[i]-=v[i];

        }

        if(count(v.begin(),v.end(),0)==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
