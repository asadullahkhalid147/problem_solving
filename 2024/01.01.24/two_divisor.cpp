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

        if(lcm(a,b)!=b)
        {
            cout<<lcm(a,b)<<endl;
        }
        else
        {
            cout<<b*(b/a)<<endl;
        }
    }
}
