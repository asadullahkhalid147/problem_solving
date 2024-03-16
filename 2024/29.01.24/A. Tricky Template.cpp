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
        int n;
        cin>>n;
        string s1;
        string s2;
        string s3;
        cin>>s1;

        cin>>s2;

        cin>>s3;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s3[i] && s2[i]!=s3[i])
            {
                ans=1;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
