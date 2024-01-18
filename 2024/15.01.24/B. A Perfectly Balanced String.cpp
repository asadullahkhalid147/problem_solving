#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string ss;cin>>ss;
        set<char>s;
        int flag=1;
        int n=ss.size();
        int k;
        for(k=0;k<n;k++)
        {
            if(s.find(ss[k])==s.end())
            {
                s.insert(ss[k]);
            }
            else
            {

                break;
            }
        }
        for(int i=k;i<n;i++)
        {
            if(ss[i]!=ss[i-k])
            {
                flag=0;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
