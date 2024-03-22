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
        int k=13;
        int ans=n/2;

        cout<<ans*k+(n%2)*6<<endl;
    }
}
