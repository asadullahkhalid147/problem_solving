#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int flag=0;
        ll sum=1;
        ll.
         ans;
        int x;
        for(int i=0;i<a;i++)
        {
            cin>>x;
//            cout<<x<<" ";
            sum*=x;
        }
//        cout<<endl;
//        cout<<sum<<endl;
        if(2023LL%sum==0)
        {
            ans=2023LL/sum;
            flag=1;
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
            cout<<ans<<" ";
            for(int i=1;i<b;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
