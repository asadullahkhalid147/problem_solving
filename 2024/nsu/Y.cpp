#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    map<int,int>mp;
    while (cin>>n)
    {
        mp[n]++;
        /* code */
    }

    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}