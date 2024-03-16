#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    ll a,b;cin>>a>>b;
    int cnt=0;
    while(b>=a)
    {
        b/=2;
        cnt++;
    }
    cout<<cnt<<"\n";
}
