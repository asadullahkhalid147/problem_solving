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
        string s;
        cin>>s;
        int flag=1;
        s+="W";
        int r=0,b=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='W'&& b+r==1)flag=0;
            else if(s[i]=='W')
            {
                b=0;
                r=0;
            }
            else if(s[i]=='B')b=1;
            else if(s[i]=='R')r=1;
        }
        if(flag)cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
}
