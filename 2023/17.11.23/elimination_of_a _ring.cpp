#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int x;
    while(t--)
    {
        set<int>a;
        int n;cin>>n;
        for(int i=0;i<n;i++)
        {
           cin>>x;
            a.insert(x);
        }
        if(a.size()<=2)cout<<n/2+1<<endl;
        else cout<<n<<endl;
    }
}
