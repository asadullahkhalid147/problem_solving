#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        deque<ll>dq(n);
        for(int i=0; i<n; i++)cin>>dq[i];

        while(dq.size()>1 && k)
        {
            ll mn=min(dq.front(),dq.back());

            if(k<2*mn)
            {
                dq.front()-=(k/2)+(k%2);
                dq.back()-=(k/2);
                k=0;
            }
            else
            {
                dq.front()-=mn;
                dq.back()-=mn;
                k-=2*mn;
            }
            if(dq.back()==0)
            {
                dq.pop_back();
            }
            if(dq.front()==0)
            {
                dq.pop_front();
            }

        }
        ll ans=n-dq.size();
        cout<<ans+(dq.size()&& dq.front()<=k)<<endl;
    }
}
