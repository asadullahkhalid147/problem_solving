#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        char x='0';
        for(auto& c:s)//& deoyar karone string er vitore value set kora jasse.
        {
            if(c=='?')c=x;
            x=c;
        }
//        for(auto c:s)
//        {
//            if(c=='?')c=x;
//            x=c;
//        }
        cout<<s<<endl;
    }
}
