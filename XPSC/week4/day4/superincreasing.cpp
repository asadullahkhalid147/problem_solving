#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
//    cout<<pow(2,t);
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        ll ans=pow(2,k-1);
        if(k>30)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(ans<=x)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
}
