#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int k=1;
    int z=2;
    int l=n-1;
    for(int i=1;i<=n;i++)
    {
        if(k==1)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<j;
            }
            cout<<endl;
        }
        else if(k==n)
        {
            for(int i=n;i>=1;i--)
            {
                cout<<i;
            }
            cout<<endl;
        }
        else
        {
            cout<<z;
            z++;
            for(int i=1;i<=n-2;i++)
            {
                cout<<" ";
            }
            cout<<l;
            l--;
            cout<<endl;
        }
        k++;
    }
    return 0;
}