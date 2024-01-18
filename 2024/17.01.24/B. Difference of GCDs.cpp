#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,l,r;cin>>n>>l>>r;
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            if(((r/i)*i)<l)
            {
                flag=1;
                break;
            }

        }

        if(flag==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=n;i++)
            {
                cout<<(r/i)*i<<" ";
            }
            cout<<endl;
        }
    }
}
