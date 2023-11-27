#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int k=INT_MAX;
        for(int i=0;i<26;i++)
        {
            int x=0,y=0;
            char ch=i+'a';

            for(int j=0;j<s.size();j++)
            {
                if(ch!=s[j])
                {
                    x++;
                    y=max(y,x);
                }
                else
                {
                    x=0;
                }
            }
            int cnt=0;
            while(y!=0)
            {
                y/=2;
                cnt++;
            }
            k=min(k,cnt);

        }
        cout<<k<<endl;
    }
}
