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
        int m=0;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            m=__gcd(m,x);
        }
        if(m==1)cout<<0<<endl;
        else if(__gcd(m,n)==1)cout<<1<<endl;
        else if(__gcd(m,n-1)==1)cout<<2<<endl;
        else cout<<3<<endl;
    }
}
