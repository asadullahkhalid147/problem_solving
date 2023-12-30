#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;char c;
        cin>>c>>n;

        for(int i=1;i<=8;i++)
        {
            if(i!=n)cout<<c<<i<<endl;
        }
        for(int i=97;i<=104;i++)
        {
            if(char(i)!=c)cout<<char(i)<<n<<endl;
        }
    }
}
