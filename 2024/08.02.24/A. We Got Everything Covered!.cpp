#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        char l='a';
        vector<char>v;
        for(int i=0;i<n;i++)
        {
            for(char c='a';c<'a'+k;c++)
            {
                v.push_back(c);
            }
        }
        for(auto it:v)cout<<it;
        cout<<endl;
//        for(int i=0;i<k;i++)
//        {
//            v.push_back(l+i);
//        }
//        string s="";
//        for(auto it:v)
//        {
//            s+=it;
//        }
//        for(int i=0;i<n-1;i++)
//        {
//            s+=s;
//        }
//        cout<<s<<endl;

    }
}
