#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,l;
        cin>>a>>b>>l;
        set<int>ans;
        for(int i=0; i<=20; i++)
        {

            int x=l;
            bool flag=false;
            for(int j=0; j<i; j++)
            {
                if(x%a)
                {
                    flag=true;
//                    break;
                }
////                if(flag)break;
//                cout<<"l";
                x/=a;
//                cout<<"--"<<x<<endl;
            }
//            cout<<x<<endl;
            if(flag)break;
//            cout<<"m";
            while(true)
            {
//                cout<<"**"<<x<<endl;
                ans.insert(x);
                if(x%b)break;
                x/=b;
            }
        }
        cout<<ans.size()<<endl;
    }
}
