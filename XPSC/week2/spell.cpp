#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int t=0,j=0,m=0,u=0,r=0,extra=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='T')t++;
            else if(s[i]=='i')j++;
            else if(s[i]=='m')m++;
            else if(s[i]=='u')u++;
            else if(s[i]=='r')r++;
            else extra++;
        }
        if(t==1 && j==1 && m==1 && u==1 && r==1 && extra==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        /* code */
    }

    return 0;
}
