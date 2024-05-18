#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int x,y;cin>>x>>y;
        ll cnt=x+y;
        if(cnt%3!=0 || x>2*y || y>2*x)cout<<"NO\n";
        else cout<<"YES\n";
        /* code */
    }
    


    return 0;
}