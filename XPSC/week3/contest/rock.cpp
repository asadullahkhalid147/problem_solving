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
        string ch,cf;cin>>ch>>cf;
        int cnt=0,kmn=0;
        for(int i=0;i<n;i++)
        {
            if(ch[i]==cf[i])
            {
                continue;
            }
            else if(ch[i]=='R' && cf[i]=='S' || (ch[i]=='S' && cf[i]=='P') || (ch[i]=='P' && cf[i]=='R'))
            {
                cnt++;
            }
            else kmn++;
        }
        int ans=kmn-cnt;
        if(ans==0)cout<<1<<endl;
        else if(ans<0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<kmn-cnt<<endl;
        }
    }
}
