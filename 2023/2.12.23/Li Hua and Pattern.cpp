#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int a[n+2][n+2];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]!=a[n-1-i][n-1-j])
                    flag++;
            }
        }
        flag/=2;
        if(k>=flag && (n%2==1 || (flag-k)%2==0))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
