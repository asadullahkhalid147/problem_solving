#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        map<char,int>mp;
        string s;cin>>s;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int odd=0,even=0,o=0,e=0;
        for(auto [x,y]:mp)
        {
            if(y%2==0)
            {
                even++;
                e+=y;
            }
            else
            {
                odd++;
                o+=y;
            }
        }
        int total=o+e;
        if(odd>1)
        {
            while(odd!=1)
            {
                if(k==0)break;
                odd--;
                k--;
                total--;
            }
        }
        if(odd>1)cout<<"NO"<<endl;
        else
        {
            if(((k%2==0)||(k%2==1)) && k<=total)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
