#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        int i=0,j=n-1;
        while(true)
        {
//            cout<<"mn:"<<min(v[i],v[j])<<"k"<<k<<endl;
            if(min(v[i],v[j])>k)
            {
                break;
            }
            else
            {
//                cout<<"n"<<endl;
                if(v[i]<v[j])
                {
//                    cout<<"l"<<endl;
                    k-=v[i];
                    v[i]=0;

                    i++;
                }
                else
                {
                    k-=v[j];
                    v[j]=0;
                    k-=v[j];
                    j--;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)cnt++;
        }
        cout<<cnt<<endl;
    }
}
