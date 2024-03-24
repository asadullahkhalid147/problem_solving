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
        if((n%2==0 && k%2==0)||(n%2 && k%2))
        {
            if(n<=k || n-k==2)cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
