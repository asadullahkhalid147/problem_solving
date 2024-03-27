#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=(10+b)-a;
        int k=0,l=0;
        if(ans%3!=0)
        {
            k=1;
        }
        if(ans%2!=0)
        {
            l=1;
        }
        if(ans>=0)
        {
            cout<<min(((ans/3)+k),((ans/2)+l))<<endl;
        }
        else cout<<0<<endl;
    }
}
