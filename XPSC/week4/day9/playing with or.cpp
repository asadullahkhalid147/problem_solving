#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        int i=0,j=k,cnt=0;
        while(j<=n)
        {
            int flag=0;
            for(int k=i;k<j;k++)
            {
                if (vec[k]&1)
                {
                    flag=1;break;
                }
            }
            if(flag)cnt++;
            i++;j++;
        }
        cout<<cnt<<endl;
    }
}
