#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int k=1;
    int z=n-1;

    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=z;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=k;i++)
        {
            cout<<"*";
        }
        k++;
        z--;
        cout<<endl;
    }
    return 0;
}