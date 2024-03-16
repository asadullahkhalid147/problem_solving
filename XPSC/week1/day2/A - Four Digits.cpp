#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    int t=n,cnt=0;
    if(n==0)
    {
        cout<<0;
        cout<<0;
        cout<<0;
        cout<<0;
        return 0;
    }
    while(n>0)
    {
        n/=10;
        cnt++;
    }
    cnt=4-cnt;
    while(cnt>0)
    {
        cout<<0;
        cnt--;
    }
    cout<<t;
}
