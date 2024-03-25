#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,sum=0;cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            sum+=x;
        }
        int ans=sum%n;
        int f=1;
        if(sum<n)f=0;
        else
        {
            if(k==0 && ans!=0)
            {
                f=0;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
