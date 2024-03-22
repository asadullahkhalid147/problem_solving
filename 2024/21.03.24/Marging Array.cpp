#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>a(n);
    vector<int>b(k);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<k;j++)cin>>b[j];
    vector<int>v(n+k);

    int i=0,j=0,cur=0;
    while(i<n && j<k)
    {
        if(a[i]<=b[j])
        {
            v[cur]=a[i];
            i++;
        }
        else
        {
            v[cur]=b[j];
            j++;
        }
        cur++;
    }
    while(i<n)
    {
        v[cur]=a[i];
        i++;
        cur++;
    }
    while(j<k)
    {
        v[cur]=b[j];
        j++;
        cur++;
    }

    for(int i=0;i<n+k;i++)
        cout<<v[i]<<" ";
}
