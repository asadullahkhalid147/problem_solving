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
        string s1,s2;cin>>s1>>s2;
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='R' && s1[i]!=s2[i])
            {
                flag=0;
            }
            if(s2[i]=='R' && s2[i]!=s1[i])
            {
                flag=0;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
