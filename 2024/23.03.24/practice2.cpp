#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int k;cin>>k;
    queue<int>q;
    int i=0,j=0;
    while(j<n)
    {
        if(v[j]<0)q.push(v[j]);
        if(j<k-1)j++;
        else
        {
            if(q.empty())cout<<0<<" ";
            else cout<<q.front()<<" ";

            if(v[i]<0)q.pop();
            i++;
            j++;
        }
    }
}
