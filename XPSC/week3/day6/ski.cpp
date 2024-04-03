#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,p;
        cin>>n>>k>>p;

        vector<ll>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        ll i=0,j=0,ans=0,cnt=0;
        while(j<n)
        {
            if(cnt<k-1 && vec[j]<=p)
            {
                i++;
                j++;
                cnt++;
//                cout<<"F"<<endl;
            }
            else if(vec[j]>p)
            {
                i=j+1;
                j++;
                cnt=0;
//                cout<<"S"<<endl;
            }
            else
            {
                ans+=(j-i+1);
                j++;
//                cout<<"T"<<endl;
            }
        }
//        cout<<"^^"<<ans<<endl;
        cout<<ans<<endl;
    }
}
