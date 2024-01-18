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
        int p=0,m=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='+')p++;
            else if(s[i]=='-')m++;
        }
        int ans=abs(p-m);
        cout<<ans<<endl;
    }
}
