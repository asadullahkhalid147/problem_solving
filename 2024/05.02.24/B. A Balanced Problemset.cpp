#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int sum,n;cin>>sum>>n;
        int ans=1;
        for(int i=1;i*i<=sum;i++)
        {
            if(sum%i==0)
            {
                if(n<=sum/i)
                {
                    ans=max(ans,i);
                }
                if(n<=i)
                {
                    ans=max(ans,sum/i);
                }
            }
        }
        cout<<ans<<endl;
    }
}


//input:20 3
//
//output: 5
