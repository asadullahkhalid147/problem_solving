#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while (n--)
    {
        int f=0,l=0;
        int t;cin>>t;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')f++;
            else
            {
                l++;
            }
        }
        /* code */
        if(f==l)
        {
            cout<<"Possible"<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
    }
    
    return 0;
}