#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        if(a==b && a==c) cout<<1<<" "<<1<<" "<<1<<endl;
        else if(a>b && a>c)cout<<1<<" "<<0<<" "<<0<<endl;
        else if(b>a && b>c)cout<<0<<" "<<1<<" "<<0<<endl;
        else cout<<0<<" "<<0<<" "<<1<<endl;


    }

}
