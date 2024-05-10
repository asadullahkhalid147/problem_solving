#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int n,m;string s,c;
    while(t--)
    {
        
        cin>>n>>m>>s>>c;
        int cnt=0;
        for(int i=0;i<c.size();i++)
        {
            if(s[cnt]==c[i])
            {
                cnt++;
            }
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}