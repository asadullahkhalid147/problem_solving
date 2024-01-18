#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    // cout<<s<<endl;
    
    int len=s.size();
    // cout<<s[len-2];

    if(s[len-2]=='A')
    {
        cout<<s<<endl;
    }
    else
    {
        int a=s[0]-'0';
        int b=s[1]-'0';
        if(a==0)
        {
            b=b+12;
        }
        else
        {
            char z=a+b;
            b=(z-'0')+12;

        }
        cout<<b;
        for(int i=2;i<len-2;i++)
        {
            cout<<s[i];
        }
    }
}