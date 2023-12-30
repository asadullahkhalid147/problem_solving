#include<bits/stdc++.h>
using namespace std;

using ll = long long int;

int main()
{
    ll a,b,c;cin>>a>>b>>c;
    ll x=abs(a);
    ll y=abs(b);


    if((c-a-b)%2==0 && x+y<=c)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
