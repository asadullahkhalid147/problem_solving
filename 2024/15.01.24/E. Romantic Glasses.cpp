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
        map<long long int,long long int>mp;
        vector<int>a(n);
        mp[0]=1;
        long long int sum=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            a[i]*=((i%2)?-1:1);
            sum+=a[i];

            if(mp[sum])
            {
               flag=1;
               break;

            }
            mp[sum]++;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
