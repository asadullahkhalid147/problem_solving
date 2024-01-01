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
        set<char>a;
//        map<int,int>mp;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            char x=s[i];
            a.insert(s[i]);
        }

        if(a.size()==1)
        {
            if(*a.rbegin()=='1')cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}
