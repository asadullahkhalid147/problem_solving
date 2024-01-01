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
        string s;cin>>s;
        map<int,int>freq;
        int mx_freq=0;
        for(int i=0;i<n;i++)
        {
            freq[s[i]]++;
            mx_freq=max(mx_freq,freq[s[i]]);
        }

        if(2*mx_freq>n)cout<<mx_freq-(n-mx_freq)<<endl;
        else cout<<n%2<<endl;
    }
}
