#include<bits/stdc++.h>
using namespace std;
const int N=100;
int main()
{

   int t;cin>>t;
   while(t--)
   {
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> b(n,1);

    vector<vector<int>>idx(N+1);

    for(int i=0;i<n;i++)
    {
        idx[arr[i]].push_back(i);
    }

    int k=2;
    for(int i=1;i<=N;i++)
    {
        if((int)idx[i].size()>=2)
        {
            b[idx[i][0]]=k;
            k++;
        }
        if(k>3) break;
    }

    if(k<=3)cout<<"-1"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

        
   }
    
    
}