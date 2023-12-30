#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        ll sum=0,neg=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                neg++;
                a[i]=-a[i];
            }
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        if(neg & 1)
        {
            sum-=2*a[0];
            cout<<sum<<endl;
        }
        else cout<<sum<<endl;

        
        /* code */
    }
    
    return 0;
}