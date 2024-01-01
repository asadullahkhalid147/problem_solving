#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        s+=s;

        ll a,b,i=0,z=0;
        for(auto c:s)
        {
            z=c=='1'?z+1:0;
//            if(c=='1')z++;
//            else z=0;

            i=max(i,z);
        }
        ll cnt = s.size()/2;
        if(i>cnt)cout<<cnt*cnt<<endl;
        else
        {
            a=(i+1)/2;
            b=(i+2)/2;

            cout<<a*b<<endl;
        }
    }
}

