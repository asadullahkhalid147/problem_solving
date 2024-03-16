
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
        vector<int>v;
         int ans=INT_MIN,bns=INT_MAX,res=0;
        while(n--)
        {


            int a,b;cin>>a>>b;
            if(a==1)
            {
                ans=max(ans,b);
            }
            else if(a==2)
            {
                bns=min(bns,b);
            }
            else if(a==3)
            {
                v.push_back(b);
            }

        }
        for(auto i:v)
        {
//            cout<<i<<" ";
            if(i>=ans && i<=bns) res++;
        }
//        cout<<endl;
//        cout<<ans<<" "<<bns<<" "<<res<<endl;
        cout<<max(bns-ans+1-res,0)<<endl;
    }
}
