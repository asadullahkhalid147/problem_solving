#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int a,b;cin>>a>>b;
    if(a>b)cout<<0<<endl;
    else if(a==b)cout<<1<<"\n";
    else
    {
        cout<<b-a+1<<"\n";
    }
}
