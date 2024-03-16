#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        int flag=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='1')
            {
                if(s[i+1]=='0')flag++;
            }
            else if(s[i]=='0')
            {
                if(s[i+1]=='1')flag++;
            }
        }
        /* code */
        cout<<flag<<endl;
    }
    
    return 0;
}