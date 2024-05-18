#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    multiset<int>ml;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        ml.insert(-x);
    }

    for(int i=0;i<m;i++)
    {
        int y;cin>>y;

        if(ml.lower_bound(-y)==ml.end())
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<-*(ml.lower_bound(-y))<<"\n";
            ml.erase(ml.lower_bound(-y));
        }


    }


    return 0;
}