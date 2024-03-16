#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        ll sum=0;
        for(int i=0;i<n;i++)sum+=a[i];
        ll per = sum/n;
        ll cnt=0,need=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]>per)
            {
                cnt+=a[i]-per;
                a[i]=per;
            }
            else
            {
                need=per-a[i];
                if(cnt>=need)
                {
                    cnt-=need;
                    a[i]=per;
                }
            }
        }
        bool flag=true;

        for(int i=0;i<n;i++)
        {
        
            if(a[i]!=per)
            {
                flag=false;
                break;
              
            }
        }
     

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        /* code */
    }
    
    return 0;
}