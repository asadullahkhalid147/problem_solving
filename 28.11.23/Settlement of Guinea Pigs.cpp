#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int known=0,unknown=0,need=0;
        int n;cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x==1)unknown++;
            else
            {
                known+=unknown;
                unknown=0;
            }
            need = max(need,(unknown+(known?known/2+1:0)));
        }
        cout<<need<<endl;
    }
}
