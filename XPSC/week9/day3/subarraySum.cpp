#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];

    int i=0,j=0,sum=0,cnt=0;
    while (j<n)
    {
        sum+=vec[j];
        if(sum>k)
        {
            while (sum>k)
            {
                sum-=vec[i];
                i++;
                /* code */
            }
            
        }
        if(sum==k)cnt++;
        j++;
        /* code */
    }
    cout<<cnt<<nl;
    return 0;
}