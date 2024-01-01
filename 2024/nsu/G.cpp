#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int s=n-1;
    int k=1;

    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=s;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=k;i++)
        {
            cout<<"#";
        }
        cout<<endl;
        s--;
        k++;
    }
    return 0;
}