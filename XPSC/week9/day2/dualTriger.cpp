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
        int n;cin>>n;
        string s;cin>>s;
        int cnt=0,knt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt++;
                if(s[i+1]=='1')
                {
                    knt++;
                }
            }
        }

        if(s.size()==1)
        {
            if(s[0]=='1')no;
            else if(s[0]=='0')yes;
        }
        else if(cnt&1)no;
        else if(cnt==2 && knt==1)no;
        else if(cnt%2==0)yes;
        /* code */
    }
    
    return 0;
}