#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int a,b;cin>>a>>b;
    if(a==b)cout<<a*2<<"\n";
    else
    {
        if(a>b)cout<<a+(a-1)<<"\n";
        else cout<<b+(b-1)<<"\n";
    }
}
