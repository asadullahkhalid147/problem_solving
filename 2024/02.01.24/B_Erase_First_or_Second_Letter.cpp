#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while (n--)
    {
        int t;cin>>t;
        string s;
        cin>>s;
        int ans=0;
        set<char>ch;
        for(auto x:s)
        {
            ch.insert(x);
            ans+=ch.size();
        }

        cout<<ans<<endl;
        /* code */
    }
    
    return 0;
}