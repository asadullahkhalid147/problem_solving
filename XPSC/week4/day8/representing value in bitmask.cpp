#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    for(int i=0;i<(1<<n);i++)
    {
        for(int k=0;k<n;k++)
        {
            if((i>>k)&1)
                cout<<v[k]<<" ";
        }
        cout<<endl;
    }
}
