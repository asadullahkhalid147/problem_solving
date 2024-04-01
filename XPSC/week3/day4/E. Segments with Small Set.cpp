#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    ll i=0,j=0,sum=0,ans=0;
    multiset<int>s;
    vector<int>vec;
    set<int>ss;
    while(j<n)
    {
        s.insert(v[j]);
        vector<int>vec(s.begin(),s.end());
        set<int>ss(vec.begin(),vec.end());
        int cnt=ss.size();
        cout<<"v[j]"<<v[j]<<"cnt:"<<cnt<<endl;
        if(cnt<=k)
        {
            ans+=(j-i+1);
            cout<<"ans:"<<ans<<endl;
        }
        else
        {

            while(ss.size()>k)
            {
                cout<<"size"<<ss.size()<<"v[i]:"<<v[i]<<endl;
                auto it=s.find(v[i]);
                s.erase(it);
                i++;
                vector<int>vec(s.begin(),s.end());
                set<int>ss(vec.begin(),vec.end());
            }
            ans+=(j-i+1);
            cout<<"size:"<<s.size();
            cout<<"ans:"<<ans<<endl;
        }
        j++;
    }
    cout<<ans;
}
