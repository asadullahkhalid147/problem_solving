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
        vector<int>pref(n+1),suff(n+2);
        for(int i=1;i<=n;i++)
        {
            pref[i]=pref[i-1]+(s[i-1]-'0');
        }
        for(int i=n;i>=1;i--)
        {
            suff[i]=suff[i+1]+(s[i-1]-'0');
        }

//        for(int i=1;i<=n;i++)
//        {
//            cout<<pref[i]<<" ";
//        }
//        cout<<endl;
//        for(int i=1;i<=n;i++)
//        {
//            cout<<suff[i]<<" ";
//        }
//        cout<<endl;
        double mid=(n/2.0),diff , mn=INT_MAX,ans;;
        for(int i=1;i<=n;i++)
        {
            int zero=i-pref[i];
            int one = suff[i+1];

            int left=ceil((i*1.0)/2);
            int right=ceil(((n-i)*1.0)/2);

            if(zero>=left && one>=right)
            {
                diff=abs(mid-i);
                if(diff<mn)
                {
                    mn=diff;
                    ans=i;
                }
            }
        }
        int total_one=pref[n];
        int half=ceil(n*1.0/2);
        if(mid<=mn && total_one>=half)
        {
            ans=0;
        }
        cout<<ans<<endl;
    }
}
