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
        for(int i=0;i<n-1;i++)
        {
            if(i+1==vec[i])
            {
                ans++;
                swap(vec[i],vec[i+1]);
            }
        }
        if(vec[n-1]==n)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
}
