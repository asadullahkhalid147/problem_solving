#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;cin>>n>>m;
    vector<pair<int,int>>vec(n);

    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        vec[i]={x,i+1};
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n;i++)
    {
        int y=m-vec[i].first;

        int r=n-1;
        for(int l=i+1;l<r;l++)
        {
            while (l+1<r && vec[l].first+vec[r].first>y)
            {
                r--;
                /* code */
            }
            if(vec[l].first+vec[r].first==y)
            {
                cout<<vec[i].second<<" "<<vec[l].second<<" "<<vec[r].second;
                return 0;
            }
            
        }
        


    }
    cout<<"IMPOSSIBLE";


    return 0;
}