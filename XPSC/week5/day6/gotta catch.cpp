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
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
//        cout<<"GELLO"<<endl;

        int ans=0;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=v[i];
        }
        sum=sum*x;
        ans=sum;
//        cout<<"HELLO"<<endl;
        sort(v.begin(),v.end(),greater<int>());

        for(int i=0; i<n; i++)
        {
            sum=sum-(v[i]*x)+y;
            ans=min(ans,sum);
        }
        cout<<ans<<endl;
    }
}
