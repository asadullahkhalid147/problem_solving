#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m,k;cin>>n>>m>>k;
        if(k>3)cout<<0<<endl;
        else if(k==1)cout<<1<<endl;
        else if(k==2)
        {
            cout<<min(m,(m/n+n-1))<<endl;
        }
        else
        {
            cout<<max(0,m-m/n-n+1)<<endl;
        }
    }
}
