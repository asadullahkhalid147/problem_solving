#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        map<int,int>mp;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        for(int i=0;i<n;i++)
        {
            mp[vec[i]]++;
        }
        int tmp=0,ans=0;
        for(int i=0;i<=n;i++)
        {
            if(mp[i]>=2)continue;
            else if(mp[i]==1 && tmp==0)tmp=1;
            else
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<nl;
        /* code */
    }
    
    return 0;
}