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
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }

        if(mp.size()>=3)cout<<"NO"<<endl;
        else
        {
            if(abs(mp.begin()->second-mp.rbegin()->second)<=1)
            {
//                cout<<mp.begin()->second-mp.rbegin()->second<<endl;
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }


    }
}
