#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        char c=s[0];
        int n=s.size()-1;
        char d=s[n];

        int flag;
        if(c>d)
        {
            swap(c,d);
        }
        if(s[0]<s[n])
        {
            flag=1;

        }
        else flag=-1;
        int a=(d-c);
//        cout<<c<<" "<<d<<endl;
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]>=c && s[i]<=d)cnt++;
        }

        map<char,vector<int>>mp;
        vector<int>vec;
        for(int i=0;i<=n;i++)
        {
            mp[s[i]].push_back(i);
        }
        for(char i=s[0];i!=s[n]+flag;i+=flag)
        {
            for(auto it:mp[i])
            {
                vec.push_back(it);
            }
        }


        cout<<a<<" "<<cnt+2<<endl;
        for(auto it:vec)
        {
            cout<<it+1<<" ";
        }
        cout<<endl;
    }
}
