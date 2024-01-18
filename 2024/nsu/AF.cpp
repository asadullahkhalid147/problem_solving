#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while (n--)
    {
        int q;cin>>q;
        if(q==1 || q==2)cout<<"NO"<<endl;
        else if(q%3==0 || q%4==0 || q%7==0 || ((q-4)%3==0) || ((q-4)%7==0) || ((q-3)%4==0) || ((q-3)%7==0) || ((q-7)%4==0) || ((q-7)%3==0))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        /* code */
    }
    
    return 0;
}