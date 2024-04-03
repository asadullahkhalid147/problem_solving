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
        string s;cin>>s;
        ll cnt=0;
        vector<ll>ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                cnt+=i;
                ans.push_back((n-i-1)-i);
            }
            else
            {
                cnt+=(n-1-i);
                ans.push_back(i-(n-i-1));
            }
        }
        sort(ans.begin(),ans.end(),greater<int>());
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>0)
            {
                cnt+=ans[i];
            }
            cout<<cnt<<" ";
        }
        cout<<endl;
    }
}
