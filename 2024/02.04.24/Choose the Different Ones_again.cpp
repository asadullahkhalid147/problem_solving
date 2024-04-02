#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
//    set<int>a,b,c;
    int t;cin>>t;
    while(t--)
    {
        set<int>a,b,c;
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x<=k)
            {
                a.insert(x);
                c.insert(x);
            }
        }
        for(int i=0;i<m;i++)
        {
            int x;cin>>x;
            if(x<=k)
            {
                b.insert(x);
                c.insert(x);
            }
        }
        if(c.size()==k && (2*a.size()>=k) &&(2*b.size()>=k))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
//        a.clear();
//        b.clear();
//        c.clear();
    }
}
