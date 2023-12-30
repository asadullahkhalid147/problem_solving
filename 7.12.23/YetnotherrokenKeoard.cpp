#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.size();
        int b=0,big_b=0;
        string ans="";
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')big_b++;
            else if(s[i]=='b')b++;
            else if(s[i]>='a' && s[i]<='z')
            {
                if(b!=0)b--;
                else ans.push_back(s[i]);
            }
            else
            {
                if(big_b!=0)big_b--;
                else ans.push_back(s[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
}
