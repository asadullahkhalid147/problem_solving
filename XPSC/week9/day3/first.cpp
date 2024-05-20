#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
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
        int ans=y/2;
        int vug=y%2;
        
        int res=0;
        if(ans==0 && vug==1)
        {
            res=11;
        }
        else
        {
            res=ans*7+vug*11;
        }
        
        int cnt=x-res;
        int wow=0;
        
        if(cnt>0)
        {
            wow=cnt/15;
            if(cnt%15)
            {
                wow++;
            }
        }
        cout<<ans+wow+vug<<nl;
        
    }
    
    return 0;
}