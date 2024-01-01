#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
        }
    }
    int p=0,s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j && !(i+j==n-1))
            {
                p+=ar[i][j];
            }
            else if(i+j==n-1 &&!(i==j))
            {
                s+=ar[i][j];
            }
        }
    }
    // cout<<p<<" "<<s<<endl;
    cout<<abs(p-s)<<endl;
    return 0;
}