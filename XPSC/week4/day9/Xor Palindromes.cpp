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
        string t(n+1,'0');
//        vector<char>t(n+1);
        int match=0;
        int mis_match=0;
        for(int i=0;i<=n/2-1;i++)
        {
            if(s[i]==s[n-i-1])
            {
                match++;
            }
            else
            {
                mis_match++;
            }
        }
        int odd=0;
        if(n&1)odd++;

        for(int i=0;i<=match;i++)
        {
            for(int j=0;j<=odd;j++)
            {
                t[mis_match+i*2+j]='1';
            }
        }
//        for(auto it:t)cout<<it;
        cout<<t<<endl;
//        cout<<endl;
    }
}
