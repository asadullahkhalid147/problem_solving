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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        int flag=0;
        for(auto i:mp)
        {
            if(i.second>=3)
            {
                flag=i.first;
                break;
            }
        }
        if(flag)cout<<flag<<"\n";
        else cout<<-1<<"\n";
    }
}
