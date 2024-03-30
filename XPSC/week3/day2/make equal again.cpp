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

        int i=1,j=1;
        while(i<n && v[i-1]==v[i])i++;
        while(j<n && v[n-j-1]==v[n-j])j++;
        if(v[0]==v[n-1])cout<<max(0,n-i-j)<<endl;
        else cout<<n-max(i,j)<<endl;
    }
}
