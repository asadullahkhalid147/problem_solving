#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int a,b,c;cin>>a>>b>>c;
    while(c>=0)
    {
        if(c%b==0)
        {
            cout<<"Yes"<<"\n";
            return 0;
        }
        c-=a;

    }
    cout<<"No"<<"\n";
}
