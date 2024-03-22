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
        int i=0,j=0,sum=0,cnt=0;
        while(n>0)
        {
            int dis=n%10;
            n/=10;
            if(i<3)
            {
                sum+=dis;
                i++;
            }
            else
            {
                cnt+=dis;
            }
            j++;
        }
        if(j>3)
        {
            if(sum==cnt)cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else if(n==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }
}
