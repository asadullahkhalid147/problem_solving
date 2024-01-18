#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int x;cin>>x;
        int f=1;
        for(int i=10;x/i>0;i*=10)
        {
            if(x%i>x/i && x%i>=i/10)
            {
                f=0;
                cout<<x/i<<" "<<x%i<<endl;
                break;
            }
        }
        if(f)cout<<-1<<endl;
        /* code */
    }
    
    return 0;
}