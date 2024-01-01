#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    float p=0,m=0,z=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)p++;
        else if(a[i]<0)m++;
        else z++;
    }

    cout<<fixed<<setprecision(6)<<p/n<<endl;
    cout<<fixed<<setprecision(6)<<m/n<<endl;
    cout<<fixed<<setprecision(6)<<z/n<<endl;
    
    
    return 0;
}