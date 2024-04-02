#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m,k;cin>>n>>m>>k;
        vector<int>v(n),a(m);

        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<m;i++)cin>>a[i];
        set<int>x;
        set<int>y;
        map<int,int>mp;
        int flag=1;

        for(int i=0;i<n;i++)
        {
            if(v[i]<=k)x.insert(v[i]);
        }
        for(int i=0;i<m;i++)
        {
            if(a[i]<=k)y.insert(a[i]);
        }

        if((x.size()<(k/2)) || (y.size()<(k/2)))
        {
//            cout<<-1<<endl;
            cout<<"NO"<<endl;
        }
        else
        {
            for(auto it:x)
            {
                mp[it]++;
            }
            for(auto it:y)
            {
                mp[it]++;
            }
            for(auto it:mp)
            {
//                cout<<it.first<<" "<<it.second<<endl;
                if(it.second==0 || mp.size()!=k)
                {

                    flag=0;
                }
            }
            if(flag)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
