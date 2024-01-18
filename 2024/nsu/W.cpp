#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        float n,k;cin>>n>>k;
        int p=k+1;
        float ans=n/p;

        int res=floor(ans);
        float total = (ans*k)-(res*k);

        float main_ans=ans+total;
        cout<<main_ans<<endl;
        /* code */
    }
    
    return 0;
}