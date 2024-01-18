#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;cin>>q;
    map<string,int>mp;
    
    while (q--)
    {
        int n;cin>>n;
        string s;
        int num;
        int sum=0;

        if(n==1)
        {
            cin>>s;
            cin>>n;
            mp[s]+=n;
        }
        else
        {
            if(n==2)
            {
                cin>>s;
                mp[s]=0;
            }
            else
            {
                cin>>s;
                cout<<mp[s]<<endl;

            }
        }
        /* code */
    }
    
    return 0;
}