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
        bool flag=false;

        int zero=0,one=0,two=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x==0)
            {
                zero++;
            }
            else if(x>=2) flag=true;
            else if(x==2) two++;
            else if(x==1) one++;
        }

        if(zero<=(n+1)/2)cout<<0<<endl;
        else if(one==1 && two==1 && zero==n-2)cout<<3<<endl;
        else if(flag || zero==n)cout<<1<<endl;
        else cout<<2<<endl;
    }
}

//000000000021000000000000->the test case they forget to add
