#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int k=1;
    for(int i=1;i<=n;i++)
    {
        int z=1;
        for(int i=1;i<=k;i++)
        {
            cout<<z<<" ";
            z++;
        }
        k++;
        cout<<endl;
    }
    return 0;
}