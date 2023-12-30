#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   int n,k;cin>>n>>k;
   vector<int>a(n),b(n);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)cin>>b[i];

   map<int,int>mp;

   for(int i=0;i<n;i++)
   {
    if(mp.find(b[i])==mp.end())
    {
        mp[b[i]]=a[i];
    }
    else
    {
        if(a[i]>mp[b[i]])
        {
            mp[b[i]]=a[i];
        }
    }
   }

   for(auto it:mp)
   {
        cout<<it.first<<" "<<it.second<<" ";
        cout<<endl;
   }

   
   

}