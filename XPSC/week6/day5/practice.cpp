#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;
const int MaxN=1e4;
int main()
{
    vector<long long>pw;
    for(int i=1; i<=MaxN; i++)
    {
        pw.push_back(pow(i,3));
    }

    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        bool found =false;
        for(int i=0; i<MaxN; i++)
        {
            if(pw[i]>x)
            {
                break;
            }
            ll l=0,r=MaxN-1,mid,ans;
            bool ok=false;
            ll need=x-pw[i];
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(pw[i]==need)
                {
                    ok=true;
                    break;
                }
                else if(pw[i]>need)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }

            }
            if(ok)
            {
                found=true;
                break;


            }
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
