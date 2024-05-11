#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>arr(n);
        vector<int>vec;;
        
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            if(mp[arr[i]]==0 && arr[i]<=n)
            {
                mp[arr[i]]++;
            }
            else 
            {
                vec.push_back(arr[i]);
            }
        }

        sort(vec.begin(),vec.end());
        int c=0;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            if(mp[i])
            {
                continue;
            }
            if(vec[c]<=i*2)
            {
                ans=-1;
                break;
            }
            ans++;
            c++;
        }
        if(ans==-1)cout<<ans<<endl;
        else cout<<ans<<endl;

        
        /* code */
    }
    
    return 0;
}