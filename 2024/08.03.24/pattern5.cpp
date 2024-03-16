#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int s=n-1;
    int k=1;
    for(int i=1;i<=(2*n)-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=k;j++)
        {
            cout<<"*";
        }
        if(i<=n-1)
        {
            s--;
            k+=2;
        }
        else
        {
            s++;
            k-=2;
        }
        cout<<endl;
    }
    return 0;
}