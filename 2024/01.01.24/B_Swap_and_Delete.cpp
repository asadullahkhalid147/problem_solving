#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.size();
        int a[2]={0,0};
        for(int i=0;i<n;i++)
        {
            a[s[i]-'0']++;
        }
        int ans=0;

        for(int i=0;i<n;i++)
        {
            if(a[!(s[i]-'0')]>0)
            {
                a[!(s[i]-'0')]--;
            }
            else
            {
                ans=n-i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}