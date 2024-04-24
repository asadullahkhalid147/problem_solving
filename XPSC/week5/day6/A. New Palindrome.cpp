#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        s=s.substr(0,s.size()/2);
        int k=unique(s.begin(),s.end())-s.begin();

        if(k==1)cout<<"NO"<<endl;
        else cout<<"Yes"<<endl;
    }
}
