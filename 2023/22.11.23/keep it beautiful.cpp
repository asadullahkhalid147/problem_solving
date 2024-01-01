#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int q;cin>>q;
        int x;cin>>x;
        cout<<1;

        int first=x;
        int mn=x,mx=1e9+10;

        int flag=1;

        for(int i=1;i<q;i++)
        {
            cin>>x;
            if(x>=mn && x<=mx)
            {
                cout<<1;
                mn=x;
            }
            else if(flag!=0 && x<=first)
            {
                cout<<1;
                mx=first;
                mn=x;
                flag=0;
            }
            else cout<<0;
        }
        cout<<endl;
    }
}
