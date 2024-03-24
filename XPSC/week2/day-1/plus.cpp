#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int a,b,c,f;cin>>a>>b>>c;
        if(a+b==c)f=1;
        if(a-b==c)f=0;

        if(f)cout<<"+"<<endl;
        else cout<<"-"<<endl;
        /* code */
    }
    
    return 0;
}