#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        iota(a,a+n,1);
        if(n==1)cout<<1<<endl;
        else if(n%2)cout<<-1<<endl;
        else
        {
            for(int i=0;i<n;i+=2)
            {
                swap(a[i],a[i+1]);
            }
            for(int i=0;i<n;i++)cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}
