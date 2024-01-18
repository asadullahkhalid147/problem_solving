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
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        long long int odd=a[0]&1,sum=a[0];
        cout<<a[0]<<" ";
        for(int i=1;i<n;i++)
        {
            sum+=a[i];
            if(a[i]%2==1)odd++;

            cout<<sum-((odd/3)+(odd%3==1))<<" ";
        }
        cout<<endl;

    }
}
