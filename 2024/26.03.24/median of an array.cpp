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

        sort(v.begin(),v.end());
        int med=n/2+(n%2);
        int flag=v[med-1];
        int cnt=0;
        for(int i=med-1;i<n;i++)
        {
            if(v[i]==flag)cnt++;
        }
        cout<<cnt<<endl;
    }
}
