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
        vector<string>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        map<string,bool>mp;
//        bool flag=false;
        for(int i=0;i<n;i++)mp[v[i]]=true;


        for(int i=0;i<n;i++)
        {
            bool f=false;

            for(int j=1;j<v[i].length();j++)
            {
                string pref,suf;
                pref=v[i].substr(0,j);
                suf=v[i].substr(j,v[i].length()-j);

                if(mp[pref] && mp[suf])
                {
                    f=true;
                }
            }
            cout<<f;
        }

        cout<<endl;
    }
}
