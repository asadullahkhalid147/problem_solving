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
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
//        cout<<"HE"<<endl;
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
//            cout<<"GE"<<endl;
            if(a[i]> a[i-1]  && a[i]>a[i+1])
            {
                ans=i+1;break;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
            cout<<ans-1<<" "<<ans<<" "<<ans+1<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
