#include <bits/stdc++.h>
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define nl '\n'
using namespace std;
typedef long long ll;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;cin>>s;
    // cout<<s<<nl;
    int freq[26]={0};

    for(int i=0;i<s.size();i++)
    {
        freq[s[i]-'A']++;
    }

    // for(int i=0;i<26;i++)
    // {
    //     cout<<freq[i]<<" ";
    // }
    // cout<<nl;
    int odd=-1;
    for(int i=0;i<26;i++)
    {
        if(freq[i]&1)
        {
            if(odd!=-1)
            {
                cout<<"NO SOLUTION"<<nl;
                return 0;
            }
            odd=i;
        }
    }

    for(int i=0;i<26;i++)
    {
        for(int j=0;j<freq[i]/2;j++)
        {
            cout<<char(i+65);
        }
    }
    if(odd!=-1)
    {
        cout<<char(odd+65);
    }
    for(int i=25;i>=0;i--)
    {
        for(int j=0;j<freq[i]/2;j++)
        {
            cout<<char(i+65);
        }
    }
    return 0;
}