#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    vector<int>p(n);
    p[0]=a[0];
    for(int i=1;i<n;i++)
    {
        p[i]=p[i-1]+a[i];
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {

        int right=0,left=0;
        right=p[n-1]-p[i];
        left=p[i-
        1];

        if(right==left)ans=i;
    }

    cout<<ans<<endl;
    return 0;
}