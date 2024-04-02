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
        int x,y,k;
        cin>>x>>y>>k;

        int ans=k*24*60;
        if((x*y)<=ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
