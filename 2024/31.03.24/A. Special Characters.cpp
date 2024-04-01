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
        string s="";
        if(n%2==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            int k=n/2;
            while(k!=0)
            {
                if(k%2==0)
                {
                    s+="AAA";
                }
                else s+="BBB";
                k--;
            }
            cout<<s<<endl;
        }
    }
}
