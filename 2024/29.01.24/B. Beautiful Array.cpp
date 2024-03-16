#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<long long int>v(n);

        for(ll i=0;i<n;i++)
        {
            v[i]=0;
        }
        s-=k*b;
        v[0]=k*b;
        if(s<0)cout<<-1<<endl;
        else
        {

            for( int i=0;i<n;i++)
            {
                ll ans=min(k-1,s);
                v[i]+=ans;
                s-=ans;
            }
            if(s>0)cout<<-1<<endl;
            else
            {
                for(int i=0;i<n;i++)
                {
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
        }

    }
}
