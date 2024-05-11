#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;

        char c=s[0];

        int j=1;
        int cnt=1;
        int flag=0;
        while(j<s.size())
        {
            if(c>s[j])
            {
                flag=1;
                cnt++;
                
            }
            
            c=s[j];
            j++;

            
        }
        cout<<cnt<<endl;
    }
    return 0;
}