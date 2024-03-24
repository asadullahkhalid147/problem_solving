#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int l;cin>>l;
        if(l!=k)v.push_back(l);
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    return 0;
}