#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];

        map<int,int>cnt;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=vec[i];j++)
            {
                if(vec[i]%j==0)
                {
                    while (vec[i]%j==0)
                    {
                        cnt[j]++;
                        vec[i]/=j;
                        /* code */
                    }
                    
                }
            }
            if(vec[i]>1)
            {
                cnt[vec[i]]++;
            }
        }
        bool flag=true;
        for(auto [x,y]:cnt)
        {
            if(y%n!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
        /* code */
    }
    


    return 0;
}