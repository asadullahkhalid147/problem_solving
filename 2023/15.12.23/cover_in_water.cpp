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
        int j=0,i=0,flag=0;
        while(j<s.size())
        {
            if(s[j]=='.')i++;
            if(j<2)j++;
            else
            {
                if(s[j]=='.' && s[j-1]=='.'&& s[j-2]=='.')
                {
                    flag=1;
                    break;
                }
                j++;
            }
        }
        if(flag==1)cout<<2<<endl;
        else cout<<i<<endl;
    }
}
