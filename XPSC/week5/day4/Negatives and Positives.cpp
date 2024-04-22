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
        for(int i=0;i<n;i++)cin>>vec[i];
        ll sum=0,neg=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]<0)
            {
                vec[i]=-vec[i];
                neg++;
            }
            sum+=vec[i];
        }
        sort(vec.begin(),vec.end());
        if(neg&1)
        {
            sum-=2*vec[0];
            cout<<sum<<endl;
        }
        else cout<<sum<<endl;

    }
}
