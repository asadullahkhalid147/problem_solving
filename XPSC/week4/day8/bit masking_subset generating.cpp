#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    for(int i=0;i<(1<<n);i++)
    {
        for(int k=0;k<n;k++)
        {
            if((i>>k)&1)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<'\n';
    }
}
