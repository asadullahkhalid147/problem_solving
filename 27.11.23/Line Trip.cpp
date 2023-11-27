#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>a(n+1);
        a.push_back(0);

        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for(int i=0; i<=n; i++)
        {
            if(i>=0 && i+1<=n)
            {
                cnt=max(cnt,(a[i+1]-a[i]));
            }

        }

        cnt = max(cnt,2*(x-a[n]));
        cout<<cnt<<endl;
    }
}
