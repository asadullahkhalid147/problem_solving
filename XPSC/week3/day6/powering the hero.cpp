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
        int n;
        cin>>n;
        priority_queue<ll>pq;

        ll ans=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x==0 && !pq.empty())
            {
                ans+=pq.top();
                pq.pop();
            }
            else
            {
                pq.push(x);
            }
        }
        cout<<ans<<endl;

    }
}
