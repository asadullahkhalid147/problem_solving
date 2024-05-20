#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;
int n,m;
// vector<string>vec;
string vec[501];

bool check(int x,int y)
{
    int f1=0,f2=0;
    for(int i=0;i<n;i++)
    {
        if(vec[x][y]==vec[i][m-1-y])f1=1;
    }
    for(int i=0;i<m;i++)
    {
        if(vec[x][y]==vec[n-1-x][i])f2=1;
    }
    return (f1&&f2);
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;cin>>t;
    while (t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            // string s;cin>>s;
            // vec.push_back(s);
            cin>>vec[i];
        }

        if(check(0,0)||check(0,m-1)||check(n-1,0)||check(n-1,m-1))
        {
            yes;
        }
        else no;
        /* code */
    }
    
    return 0;
}