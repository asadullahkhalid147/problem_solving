#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int>mp;
    int p=5;
    for(int i=0;i<5;i++)
    {
        mp[i]=p;
        p--;
    }
    for(auto [i,j]:mp)
    {
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}