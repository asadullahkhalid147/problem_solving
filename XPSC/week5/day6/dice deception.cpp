#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        sort(vec.begin(),vec.end());

        int sum=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==1)
            {
                vec[i]=6;
                sum++;
            }
            if(vec[i]==2)
            {
                vec[i]=5;sum++;
            }
            if(vec[i]==3)
            {
                vec[i]=4;sum++;
            }
            if(sum==k)break;
        }
        for(int i=0;i<n;i++)ans+=vec[i];
        cout<<ans<<endl;
    }
}
