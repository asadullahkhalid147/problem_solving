#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    vector<ll>v;
        vector<ll>a;
        vector<ll>vec;
    int t;cin>>t;
    while(t--)
    {
        int n,c,d;cin>>n>>c>>d;

        for(int i=0;i<n*n;i++)
        {
            int x;cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());
//        for(int i=0;i<v.size();i++)
//        {
//            cout<<v[i]<<" ";
//        }
//        cout<<endl;
        int start=v[0];
//        cout<<start<<endl;
        a.push_back(start);

        int ans=start;
        for(int i=1;i<n;i++)
        {
             ans+=d;
            a.push_back(ans);
        }
//        for(int i=0;i<n;i++)
//        {
//            cout<<a[i]<<" ";
//        }
//        cout<<endl;
        for(int i=0;i<a.size();i++)
        {
            vec.push_back(a[i]);
            int res=a[i];
            for(int j=1;j<n;j++)
            {
                res+=c;
                vec.push_back(res);
            }
        }
        int flag=1;
//        for(int i=0;i<vec.size();i++)
//        {
//            cout<<vec[i]<<" ";
//        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<n*n;i++)
        {

            if(vec[i]!=v[i])
            {
//                cout<<vec[i]<<" "<<v[i]<<endl;
                flag=0;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
//        cout<<endl;
        vec.clear();
        a.clear();
        v.clear();
    }
}
