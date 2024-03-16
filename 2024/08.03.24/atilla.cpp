#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;cin>>t;
    while (t--)
    {
        int mm=0;
        int n;cin>>n;
        string s;cin>>s;
        for(int i=0;i<s.size();i++)
        {
            mm=max(mm,s[i]-'a');
        }
        cout<<mm+1<<endl;


        /* code */
    }
    
    return 0;
}