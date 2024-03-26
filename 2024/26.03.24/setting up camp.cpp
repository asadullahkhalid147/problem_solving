#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
        while(b%3!=0)
        {
            if(c==0)break;
            b++;
            c--;
//            cout<<b<<" "<<c<<endl;

        }
//        cout<<a<<" "<<b<<" "<<c<<endl;
        int k=0;
        if(c%3)
        {
            k=1;
        }
        if(b%3!=0)cout<<-1<<endl;
        else
        {
            cout<<a+(b/3)+(c/3)+k<<endl;
        }
    }
}
