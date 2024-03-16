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
        vector<int>a;
        vector<int>b(n-1);
        for(int i=0;i<n-1;i++)cin>>b[i];
        a.push_back(b[0]);

        for(int i=0;i<n-2;i++)
        {
            a.push_back(min(b[i],b[i+1]));
        }
        a.push_back(b[n-2]);

        for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
        cout<<endl;


    }
}
