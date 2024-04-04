#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cout<<endl;
//        char c;cin>>c;
        int n,k;cin>>n>>k;


        map<int,int>first,last;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            if(first[x]==0)first[x]=i;
            last[x]=i;
        }

        while(k--)
        {
            int i,j;cin>>i>>j;
            if(first[i]!=0 && first[j]!=0 && last[j]>first[i])cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
