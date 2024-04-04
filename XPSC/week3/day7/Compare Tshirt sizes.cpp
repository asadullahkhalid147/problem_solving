#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s,m;cin>>s>>m;

        char c=s[s.size()-1];
        char cc=m[m.size()-1];

        if(c!=cc)
        {
            if(c<cc)cout<<">"<<endl;
            else if(c>cc)cout<<"<"<<endl;
        }
        else if(c==cc)
        {
            if(c=='S')
            {
                if(s.size()>m.size())cout<<"<"<<endl;
                else if(s.size()==m.size())cout<<"="<<endl;
                else cout<<">"<<endl;
            }
            else if(c=='L')
            {
                if(s.size()>m.size())cout<<">"<<endl;
                else if(s.size()==m.size())cout<<"="<<endl;
                else cout<<"<"<<endl;
            }
            else if(c=='M')cout<<"="<<endl;
        }

    }
}
