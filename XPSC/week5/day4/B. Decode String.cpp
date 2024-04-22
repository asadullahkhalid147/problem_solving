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
        int i=n-1;
        while(i>=0)
        {
            if(s[i]=='0')
            {
                c+=stoi(s.substr(i-2,2))+'a'-1;
                i-=3;
            }
            else
            {
                c+=(s[i]-'0')+'a'-1;
                i--;
            }
        }
        reverse(c.begin(),c.end());
        cout<<c<<endl;
    }
}
