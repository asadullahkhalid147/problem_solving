#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    int m;cin>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++)cin>>a[i];

    sort(vec.begin(),vec.end());
    sort(a.begin(),a.end());
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(vec[i]-a[j])<=1)
            {
                cnt++;
                a[j]=1000;
                break;
            }
        }
    }
    cout<<cnt<<endl;
}
