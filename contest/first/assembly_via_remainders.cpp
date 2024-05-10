#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int cnt=750;
        cout<<cnt<<" ";
        for(int i=2;i<=n;i++)
        {
            int x;cin>>x;
            cnt=cnt+x;
            cout<<cnt<<" ";
        }
        cout<<endl;
        /* code */
    }
    
    return 0;
}