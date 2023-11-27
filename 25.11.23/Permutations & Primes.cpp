#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<"2 1"<<endl;
            continue;
        }

        vector<int>vec(n,-1);

        vec[n/2]=1;
        vec[0]=3;
        vec[n-1]=2;

        int cnt=4;
        for(int i=1;i<=n-1;i++)
        {
            if(vec[i]!=-1)continue;
            vec[i]=cnt++;
        }

        for(int i=0;i<n;i++)cout<<vec[i]<<" ";
        cout<<endl;
    }
}
