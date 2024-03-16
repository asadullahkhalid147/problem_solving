#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n);
    int mm=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            mm=max(mm,a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%2==0)
            {
                mm=max(mm,a[i]+a[j]);
            }
        }
    }
    cout<<mm<<endl;
    return 0;
}