#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;

        int ans=n*k;
        string str=to_string(ans);
        if(str.size()==5)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
