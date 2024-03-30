#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int h=0,m=0;
        int i=0;
        string si="";
        cout<<s<<endl;
        for(int i=0;i<s.size();i++)
        {
            if(i==2)continue;
            if(i==0)
            {
                h+=(s[i]-'0')*10;
            }
            else if(i==1)
            {
                h+=(s[i]-'0');
            }
            else
            {
                si[i]+=s[i];
            }

        }
        if(h>=12)
        {
            if(h==12)
            {
                cout<<h<<":"<<si<<"PM"<<endl;

            }
            else
            {
                cout<<h%12<<":"<<si<<"PM"<<endl;
            }
        }
        else
        {
            if(h==0)
            {
                cout<<0;
                cout<<0<<":"<<si<<"AM"<<endl;
            }
            else
            {
                if(h<10)
                {
                    cout<<0;
                    cout<<h<<":"<<si<<"AM"<<endl;
                }
                else cout<<h<<":"<<si<<"AM"<<endl;
            }
        }
    }

}
