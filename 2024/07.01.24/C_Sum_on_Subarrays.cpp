#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;

        for(int i=1;i<=n;i++)
        {
            if(k>=i)
            {
                cout<<"2 ";
                k-=i;
            }
            else if(k!=0)
            {
                cout<<-2*(i-k)+1<<" ";
                k=0;
            }
            else cout<<"-1000 ";
        }
        cout<<endl;
        /* code */
    }
    
    return 0;
}