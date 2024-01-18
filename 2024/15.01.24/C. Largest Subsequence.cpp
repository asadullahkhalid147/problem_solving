#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
//const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>vec;
        string s;cin>>s;

        for(ll i=0;i<n;i++)
        {
            while(!vec.empty() && s[i]>s[vec.back()])
            {
                vec.pop_back();
            }
            vec.push_back(i);
        }
        ll res=0,ans=vec.size();
        for(ll i=0;i<vec.size();i++)
        {
            if(s[vec[i]]==s[vec[0]])res++;
        }

        for(ll i=0;i<vec.size()/2;i++)
        {
            swap(s[vec[i]],s[vec[vec.size()-1-i]]);
        }

        if(is_sorted(s.begin(),s.end()))cout<<ans-res<<endl;
        else cout<<-1<<endl;
    }
}
