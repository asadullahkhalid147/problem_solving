#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>>p;
    priority_queue<int,vector<int>,greater<int>>q;
    while (n--)
    {
        int x;cin>>x;
        if(x==1)
        {
            int m;cin>>m;
            if(m%2==0)
            {
                p.push(m);
            }
            else
            {
                q.push(m);
            }
        }
        else if(x==2)
        {
            if(!p.empty())
            {
                cout<<p.top()<<endl;
                p.pop();
            }
            else cout<<"empty"<<endl;
        }
        else
        {
            if(!q.empty())
            {
                cout<<q.top()<<endl;
                q.pop();
            }
            else cout<<"empty"<<endl;
        }

        
        /* code */
    }
    
    return 0;
}