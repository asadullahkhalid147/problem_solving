#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b;cin>>a>>b;
        if((a+b)%2!=0)cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
}
