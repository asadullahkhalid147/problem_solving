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
        int k=n/2;
        int i=1;
        int j=n;
        while(k!=0)
        {
            cout<<j<<" "<<i<<" ";
            i++;j--;
            k--;
        }
        if(n%2)cout<<j;
        cout<<endl;
    }
}
