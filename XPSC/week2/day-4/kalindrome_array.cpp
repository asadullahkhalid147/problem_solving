#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;
int n;
int v[200001];
int check(int x)
{
    int l=1,r=n;
    int f=1;
    while(l<=r && f)
    {
        f=0;
        if(v[l]==x)
        {
            l++;f=1;
        }
        else if(v[r]==x)
        {
            r--;
            f=1;
        }
        else if(v[l]==v[r])
        {
            l++;
            r--;
            f=1;
        }
    }
    return l>r;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
       cin>>n;

        for(int i=1;i<=n;i++)cin>>v[i];


        int l=1,r=n;
        while(l<=r && v[l]==v[r])
        {
            l++;r--;
        }
        if(l>r)
        {
            cout<<"YES"<<endl;
            continue;
        }

        if(check(v[l])|| check(v[r]))
        {
            cout<<"YES"<<endl;
//            continue;
        }
        else cout<<"NO"<<endl;
    }
}
