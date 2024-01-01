#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,res,j,temp;
    string s1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s1;
        vector<int>a1(26,0),b1(26,0);
        for(auto i:s1) a1[i-'a']++;
        res=0;
        for(auto i:s1)
        {
            a1[i-'a']--;
            b1[i-'a']++;
            temp=0;
            for(j=0; j<26; j++)
            {
                temp+=min(1,a1[j])+min(1,b1[j]);
            }
            res=max(res,temp);
        }
        cout<<res<<endl;
    }
    return 0;
}
