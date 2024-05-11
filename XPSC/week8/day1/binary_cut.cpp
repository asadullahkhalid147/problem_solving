#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        int cnt=0,knt=0;

        for(int i=1;i<s.size();i++)
        {
            if(s[i]!=s[i-1])
            {
                cnt++;
            }
            if(s[i]=='1' && s[i-1]=='0')
            {
                knt++;
            }
        }
        if(knt)
        {
            cout<<cnt<<endl;
        }
        else cout<<cnt+1<<endl;
        /* code */
    }
    
    return 0;
}