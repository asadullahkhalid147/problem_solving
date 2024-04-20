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
//        cout<<"key"<<key<<endl;
        int mid,idx=-1,l=0,r=n-1;

        while(l<=r)
        {
            int mid=(l+r)/2;

            if(key==v[mid])
            {
                idx=mid;
//                cout<<"IDX"<<idx<<endl;
                break;
            }
            else if(key<v[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(idx==-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
