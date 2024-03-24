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
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        set<int>st;
        for(int i=0;i<n;i++)
        {
            st.insert(v[i]);
        }
        int sz=st.size();
        int ans=n-sz;
        if(ans%2==0)cout<<sz<<endl;
        else cout<<sz-1<<endl;
    }
}
