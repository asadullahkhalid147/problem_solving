#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int a,b,c,d;cin>>a>>b>>c>>d;
        if(a<b)
        {
            swap(a,b);
        }

        int cnt=0;
        for(int i=b;i<=a;i++)
        {
            if(i==c || i==d)cnt++;
            
        }
        if(cnt%2)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        /* code */
    }
    
    return 0;
}