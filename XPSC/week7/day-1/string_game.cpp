#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;string s;
        cin>>n>>s;

        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                cnt++;
            }
        }

        int num=min(cnt,n-cnt);
        if(num%2)cout<<"Zlatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
    return 0;
}