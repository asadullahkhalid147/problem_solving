#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;

        int k=n/2;
        while (k>0)
        {
            cout<<2<<" ";
            k--;
            /* code */
        }
        
    }
    else
    {
        cout<<n/2<<endl;
        int k=(n/2)-1;
        while (k>0)
        {
            cout<<2<<" ";
            k--;
            /* code */
        }
        cout<<3;
    }
    return 0;
}