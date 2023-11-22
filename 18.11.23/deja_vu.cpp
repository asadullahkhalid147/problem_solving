#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int mx=INT_MAX;
        int n,q;cin>>n>>q;

        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            a.push_back(x);
        }

        for(int i=1;i<=q;i++)
        {
            int num=1;
            int x;cin>>x;
            if(x<mx)
            {
                mx=x;
                while(x--)num*=2;

                for(int i=0;i<n;i++)
                {
                    if(a[i]%num==0)a[i]+=num/2;

                }
            }
        }
        for(auto it:a)cout<<it<<" ";
        cout<<endl;
    }
}

