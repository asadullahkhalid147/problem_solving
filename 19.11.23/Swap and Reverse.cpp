#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll cnt,odd_cnt=0,even_cnt=0, n,k;cin>>n>>k;
        string s;
        cin>>s;

        vector<char>even,odd;
        cnt=(ll)s.size();

        for(ll i=0;i<cnt;i++)
        {
            if(i%2==0)
            {
                odd.push_back(s[i]);
            }
            else even.push_back(s[i]);
        }

        if(k%2==0)
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else
        {
            sort(odd.begin(),odd.end());
            sort(even.begin(),even.end());
            for(ll i=0;i<n;i++ )
            {
                if(i%2==0)cout<<odd[odd_cnt++];
                else cout<<even[even_cnt++];
            }
            cout<<endl;
        }
    }
}
