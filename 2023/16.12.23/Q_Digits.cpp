#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        /* code */
        int n;cin>>n;
        do
        {
            int dig = n%10;
            cout<<dig;
            cout<<" ";
            n/=10;
            /* code */
        }
        while (n!=0);
        
        cout<<endl;
        
    }
    
    return 0;
}