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
        string str;cin>>str;
        for(auto &c:str)c=tolower(c);
        auto si=unique(str.begin(),str.end());
        str.erase(si,str.end());

        if(str=="meow")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
