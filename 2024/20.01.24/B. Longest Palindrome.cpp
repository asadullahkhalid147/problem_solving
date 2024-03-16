#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n,m;cin>>n>>m;

    set<string>str;
    vector<string>left,right;
    string s[100];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        str.insert(s[i]);
    }
    string mid;
    for(int i=0;i<n;i++)
    {
        string t=s[i];
        reverse(t.begin(),t.end());
        if(s[i]==t && mid.size()<=t.size())
        {
            mid=s[i];
        }
        else
        {
            if(str.find(t)!=str.end())
            {
                left.push_back(s[i]);
                right.push_back(t);
                str.erase(s[i]);
                str.erase(t);
            }
        }
    }
    cout<<left.size()*m*2+mid.size()<<endl;
    for(auto it:left)cout<<it;
    cout<<mid;
    reverse(right.begin(),right.end());
    for(auto it:right)cout<<it;
}
