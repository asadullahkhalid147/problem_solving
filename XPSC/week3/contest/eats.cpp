#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ans=n-2;
        if(ans<0)cout<<0<<endl;
        else
        {
            cout<<(ans/7)+1<<endl;
        }
    }
}
