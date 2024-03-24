#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int k;cin>>k;
    int i=0,j=0,sum=0,mx=INT_MIN;
    while(j<n)
    {
        sum+=v[j];
        if(j<k-1)j++;
        else
        {
            mx=max(sum,mx);
            sum-=v[i];
            i++;j++;
        }
    }
    cout<<mx<<endl;
}
