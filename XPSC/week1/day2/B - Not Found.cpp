#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    string s;cin>>s;
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++)
    {
        v[s[i]-'a']++;
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
        if(v[i]==0)
        {
            flag=i+'a';
            break;
        }

    }
    if(flag)cout<<char(flag);
    else cout<<"None";
}
