#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<ll>p(n);
        p[0]=a[0];

        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        int cnt=0;
        for(int i=1;i<n-1;i++)
        {
            int left=0;
            int right=0;
            left=p[i-1];
            right=p[n-1]-p[i];

            if(left==right)cnt++;
        }
        cout<<cnt<<endl;

    }
    
    return 0;
}