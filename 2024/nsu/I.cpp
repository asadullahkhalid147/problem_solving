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
    int cnt=0;
    sort(a.begin(),a.end(),greater<int>());
    int num=a[0];
    for(int i=0;i<n;i++)
    {
        if(num==a[i])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}