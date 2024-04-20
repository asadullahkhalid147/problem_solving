#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int  n,key;cin>>n>>key;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    int l=0,r=n-1,mid,idx=-1;

    while(l<=r)
    {
//        cout<<l<<" "<<r<<endl;
        mid=(l+r)/2;
        if(key==vec[mid])
        {
            idx=mid;
//            cout<<idx<<endl;
            break;
        }
        else if(key<vec[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(idx==-1)cout<<"ELEMENT NOT FOUND"<<endl;
    else cout<<"ELEMENT FOUND AT INDEX"<<" "<<idx<<endl;
}
