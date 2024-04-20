#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>v(n),a(k);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<k;i++)cin>>a[i];

    for(int i=0;i<k;i++)
    {
        int key=a[i];
        int l=0,r=n-1,mid,idx=n;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(key<=v[mid])
            {
                idx=mid;
                r=mid-1;
            }
            else if(key>v[mid])
            {
                l=mid+1;
            }
        }
//        if(idx==-1)cout<<n+1<<endl;
//        else cout<<idx+1<<endl;
        cout<<idx+1<<endl;
    }
}
