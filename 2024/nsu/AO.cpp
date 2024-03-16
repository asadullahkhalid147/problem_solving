#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{

    vector<int>a;
    int ans=0;


    int n;
    cin>>n;
    int sum=n;
    int cnt=0;
    map<int,int>mp;
    for(int j=1;j<=7;j++)
    {
        int x;cin>>x;
        mp[j]=x;
    }
    int i=1;
    while(sum!=0)
    {

        sum-=mp[i%7];
        if(sum<=0)
        {
            ans=i%7;
            break;
        }

        i++;
    }


    if(ans==0)cout<<7<<endl;
    else cout<<ans<<endl;
}
