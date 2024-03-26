#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll a,b,c;cin>>a>>b>>c;
        cout<<(c/a)+(c/b)+2<<endl;
    }
}
