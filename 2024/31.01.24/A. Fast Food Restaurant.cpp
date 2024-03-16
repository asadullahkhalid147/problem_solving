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
        int a,b,c;
        cin>>a>>b>>c;
        int p=0;

        if(a)
        {
            a--;
            p++;
        }
        if(b)
        {
            b--;
            p++;
        }
        if(c)
        {
            c--;
            p++;
        }

        if(c>b)swap(c,b);
        if(b>a)swap(b,a);

        if(a&&b)
        {
            a--;
            b--;
            p++;
        }
        if(a&&c)
        {
            a--;
            c--;
            p++;
        }
        if(b&&c)
        {
            b--;
            c--;
            p++;
        }
        if(a&&b&&c)
        {
            a--;
            b--;
            c--;
            p++;
        }

        cout<<p<<endl;
    }
}
