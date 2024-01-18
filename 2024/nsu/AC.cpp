#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;cin>>q;
    set<int>s;
    while (q--)
    {
        
        int n;cin>>n;
        int k;
        if(n==1)
        {
            cin>>k;
            s.insert(k);
        }
        else
        {
            if(n==2)
            {
                cin>>k;
                s.erase(k);
            }
            else
            {
                cin>>k;
                auto it=s.find(k);
                if( it == s.end())
                {
                    cout<<"No"<<endl;
                }
                else cout<<"Yes"<<endl;
            }
        }
        /* code */
    }
    
    return 0;
}