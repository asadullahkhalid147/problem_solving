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

        int one,two;
        one=abs(a-1);
        two=abs(b-c)+abs(c-1);
        if(one<two)
        {
            cout<<1<<endl;
        }
        else if(two<one)
        {
            cout<<2<<endl;
        }
        else if(one==two)
        {
            cout<<3<<endl;
        }

    }
}
