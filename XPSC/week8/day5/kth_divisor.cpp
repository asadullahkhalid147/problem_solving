#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long n,k;cin>>n>>k;
    vector<long long>vec;
    for(long long i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            if((n/i)!=i)
            {
                vec.push_back(n/i);
            }
        }
    }

    sort(vec.begin(),vec.end());
    ll cnt=vec.size();
    if(cnt<k)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(ll i=0;i<vec.size();i++)
        {
            if(i==k-1)
            {
                cout<<vec[i];
                break;
            }
        }
    }
    return 0;
}