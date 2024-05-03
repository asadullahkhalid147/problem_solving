#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll mod = 1e9 + 7;
const int MaxN=1e4;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll>a;

    for(int i=1; i<=MaxN; i++)
    {
        a.push_back((ll)pow(i,3));
    }

    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        bool found =false;

//        cout<<"H"<<endl;
        for(int i=0; i<MaxN; i++)
        {
            if(a[i]>=x)
            {
                break;
            }
            ll need = x-a[i];
            ll l=0,r=MaxN-1,mid,ans;
            bool ok=false;
//            cout<<"K"<<endl;
            while(l<=r)
            {
                mid=l+(r-l)/2;
//                cout<<"T"<<endl;
                if(a[mid]==need)
                {
//                    cout<<"X"<<endl;
                    ok=true;
                    break;
                }
                else if(a[mid]>need)
                {
//                    cout<<"Y"<<endl;
                    r=mid-1;
                }
                else
                {
//                    cout<<"Z"<<endl;
                    l=mid+1;
                }
//                cout<<"L"<<endl;
            }
            if(ok)
            {
                found=true;
                break;
            }
//            cout<<"Q"<<endl;
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
