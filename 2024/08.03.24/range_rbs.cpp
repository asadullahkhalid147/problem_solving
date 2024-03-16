#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;cin>>n;
    string s;cin>>s;
    ll q;cin>>q;
    while (q--)
    {
        ll f=0,k=0,u=0;

        int l,m;cin>>l>>m;
        l--;m--;
       if((l-m+1)%2==0 && s[l]!=')' && s[m]!='(')
       {
            cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
        /* code */
    }
    
    return 0;
}