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
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)cin>>v[i];
        int cnt=0;
        for(int i=1; i<=n-1; i++)
        {

            if(v[i]==i)
            {
                swap(v[i],v[i+1]);
                cnt++;
            }
        }
        if(v[n]==n)cnt++;
        cout<<cnt<<endl;

    }
}
