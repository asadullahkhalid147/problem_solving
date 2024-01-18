#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(a[i]==mn)
            {
                ans=i;
            }
        }
        int cnt=1;
        // cout<<"ans "<<ans<<endl;
        // cout<<"cnt "<<cnt<<endl;
        if(ans==n-1)
        {
            for(int i=n-2;i>=0;i--)
            {
                // cout<<"i"<<i<<" a[i] "<<a[i]<<" mn "<<mn<<endl;
                if(a[i]>mn)
                {
                    cnt++;
                    mn=a[i];
                    // cout<<"cnt "<<cnt<<" a "<<endl;
                }
                else if(a[i]==mn)
                {
                    cnt++;
                    mn=a[i];
                    // cout<<"cnt "<<cnt<<" b "<<endl;
                }
                else if(a[i]<mn)
                {
                    cnt++;
                    break;
                    // cout<<"cnt "<<" c "<<endl;
                }
                // cout<<"cnt "<<cnt<<endl;
            }
            // cout<<"n "<<n<<" cnt "<<cnt<<endl;
            cout<<n-cnt<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        /* code */
    }
    
    return 0;
}