#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        set<char>ss;
        for(int i=0;i<s.size();i++)
        {
            ss.insert(s[i]);
        }
        if(ss.size()==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<s[s.size()-1];
            for(int i=0;i<s.size()-1;i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }
        /* code */
    }
    
    return 0;
}