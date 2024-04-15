#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k,q;cin>>k>>q;
        vector<int>v(k),n(q);
        for(int i=0;i<k;i++)cin>>v[i];
        for(int i=0;i<q;i++)cin>>n[i];
        vector<int>vec;
        int x=v[0];
        for(int i=0;i<q;i++)
        {
            vec.push_back(min(x-1,n[i]));
        }

        for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
        cout<<endl;
    }
}
