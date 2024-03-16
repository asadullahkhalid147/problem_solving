#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        bool flag=true;
        bool flag1=true;

        int p=x;int q=y;
        int m=1,r=1;
        while(p--)
        {

            if(a[i]>a[i-m] && (i-m)>=0)
            {
//                cout<<i<<" "<<a[i]<<" "<<a[i-m]<<endl;
                flag=false;
                break;
            }

            m++;
        }
//        if(flag==false)continue;
        while(q--)
        {

            if(a[i]>a[i+r] && (i+r)<n)
            {
//                cout<<i<<" "<<a[i]<<" "<<a[i+r]<<endl;
                flag1=false;
                break;
            }

            r++;
        }

//        cout<<flag1<<" "<<flag<<endl;
        if(flag1==true && flag==true)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}
