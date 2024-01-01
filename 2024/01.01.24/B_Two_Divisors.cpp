#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=lcm(n,k);

        if(ans!=k)
        {
            cout<<lcm(n,k)<<endl;
        }
        else
        {
            cout<<(k/n)*k<<endl;
        }
        /* code */
    }
    
}