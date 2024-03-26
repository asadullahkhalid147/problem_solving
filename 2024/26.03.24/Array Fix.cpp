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
        for(int i=0; i<n; i++)cin>>a[i];
        int f=1,x,y;
        vector<int>v;
        v.push_back(a[n-1]);
        for(int i=n-2; i>=0; i--)
        {
//            cout<<"H"<<endl;
//            cout<<a[i-1]<<" "<<a[i]<<endl;
            if(a[i]>v.back())
            {
                x=a[i]%10;
                y=a[i]/10;
                v.push_back(x);
                v.push_back(y);

            }
            else v.push_back(a[i]);
        }
//        cout<<"H"<<endl;
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>v[i+1])
            {
                f=0;break;
            }
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

//        cout<<(is_sorted(v.rbegin(),v.rend())?"YES":"NO")<<endl;
    }
}
