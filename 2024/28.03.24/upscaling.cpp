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
        int n;cin>>n;
        vector<char>v;
        for(int i=1; i<=n; i++)
        {
            if(i%2==1)
            {
                v.push_back('#');
                v.push_back('#');
            }
            else
            {
                v.push_back('.');
                v.push_back('.');
            }
        }
        for(int i=1; i<=n; i++)
        {
            if(i%2==1)
            {
                for(auto x:v)
                {
                    cout<<x;
                }
                cout<<endl;
                for(auto x:v)
                {
                    cout<<x;
                }
                cout<<endl;
            }
            else
            {
                for(auto x:v)
                {
                    if(x=='#')cout<<'.';
                    else cout<<'#';
                }
                cout<<endl;
                for(auto x:v)
                {
                    if(x=='#')cout<<'.';
                    else cout<<'#';
                }
                cout<<endl;
            }
        }
    }
}
