#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>v(n),a(k);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<k;i++)cin>>a[i];

    for(int i=0;i<k;i++)
    {
        int key=a[i];
        int mid , l=0,r=n-1,idx=-1;

        while(l<=r)
        {
            mid=(l+r)/2;

            if(key>= v[mid])
            {
                idx=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<idx+1<<endl;
    }
}
