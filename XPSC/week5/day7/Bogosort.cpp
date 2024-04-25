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
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        sort(vec.begin(),vec.end(),greater<int>());
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}
