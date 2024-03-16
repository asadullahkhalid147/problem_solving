#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;

        string s;
        cin>>s;
        s+=s;
        int i=0;
        int flag=0;
        int cnt=0,mx=INT_MIN;
        while(s[i]!='\0')
        {
            if(s[i]==c)flag=1;
            if(s[i]=='g')
            {
                flag=0;
                cnt=0;
            }
            if(flag)cnt++;
            mx=max(cnt,mx);
            i++;

        }
//        cout<<"N"<<endl;
        cout<<mx<<endl;
    }
}
