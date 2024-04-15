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
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

       int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans^vec[i];
        }

        int flag=0;
        if(ans==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(n&1)
        {
            for(int i=1;i<=1<<8;i++)
            {
                ans=ans^i;
//                cout<<i<<" "<<ans<<endl;
                if(ans==0)
                {
                    flag=i;
                    break;
                }
                else
                {
                    ans=ans^i;
                }

            }
        }
        else
        {
            if(ans==0)flag=2;
        }
        if(flag)cout<<flag<<endl;
        else cout<<-1<<endl;
    }
}
