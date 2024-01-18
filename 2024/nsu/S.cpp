#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=i+1)cnt++;
    }

    if(cnt==2|| cnt==0)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}