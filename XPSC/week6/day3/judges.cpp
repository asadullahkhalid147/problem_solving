#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ch;cin>>ch;
        string s;

        getline(cin,s);
        string sh;cin>>sh;
        int ans=0;
        cout<<s<<endl;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=' ')
            {
                ans+=s[i]-'0';
            }
        }
        cout<<ans<<endl;
        if(ans<4)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
