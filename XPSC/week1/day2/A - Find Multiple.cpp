#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int a,b,c;cin>>a>>b>>c;

    int x=(b/c)*c;
    if(a<=x)cout<<x;
    else cout<<-1;

}
