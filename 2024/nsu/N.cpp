#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    vector<string>v;
    while (t--)
    {
        int x,y,l;
        cin>>x>>y>>l;

        double ans=(double)(l*100)/(x*y);
        cout<<ans<<endl;


        if(ans>=50.000)
        {
            v.push_back("YES");
        }
        else
        {
            v.push_back("NO");
        }
        /* code */
    }
    for(auto x:v)
    {
        cout<<x<<endl;
    }
    
    return 0;
}