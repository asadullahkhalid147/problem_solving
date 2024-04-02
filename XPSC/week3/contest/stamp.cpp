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
        string s;cin>>s;
        string c="";
        int cnt=0,f=1;
        for(int i=0;i<n;i++)
        {
            if(f==0)
            {
                if(cnt==2)
                {
                    f=1;
                }
                cnt++;

            }
            if(s[i]=='0')
            {
                c+='0';
            }
            else if(s[i]=='1' && f==1)
            {
                c+='1';
                f=0;
            }
            else if(s[i]=='1')
            {
                c+='0';
            }
        }
        cout<<c<<endl;
    }
}
