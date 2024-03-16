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
        int flag=1;
        for(int i=1;i<n;i+=3)
        {
            if(s[i]-s[i+1])
                {
                    flag=0;
                    break;
                }

        }

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
