#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    while(n--)
    {

        int a,b,c;
        cin>>a>>b>>c;
        ll x=gcd(gcd(a,b),c);

        if(((a/x)+(b/x)+(c/x)-3)<=3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
