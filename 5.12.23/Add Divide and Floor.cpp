#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];

        sort(arr,arr+n);
        int ans=0;
        int diff = arr[n-1]-arr[0];
        while(diff)
        {
            ans++;
            diff/=2;
        }
        int mn=arr[0];
        cout<<ans<<endl;
        if(ans && ans<=n)
        {

            cout<<(1<<30)-mn<<" ";
            for(int i=1; i<ans; i++)cout<<0<<" ";
//            for(int i=1;i<ans;i++)cout<<0<<" ";
        }
        else continue;

        cout<<endl;

    }
}
