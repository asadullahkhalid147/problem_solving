#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int one=0,two=0,d=0;
        int n;cin>>n;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            if(x==1)one=i;
            else if(x==2)two=i;
            else if(x==n)d=i;
        }
        if(one>two)swap(one,two);
        if(one<d && d<two)cout<<1<<" "<<1<<endl;
        else if(d<one)cout<<d<<" "<<one<<endl;
        else if(two<d)cout<<d<<" "<<two<<endl;
    }
}
