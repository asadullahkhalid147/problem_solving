#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    double s,v,r;
    r=3.1416*((a+b-c)/2);
    v=0.5*a*b;
    s=3.1416*(c/2)*(c/2);

    cout<<fixed<<setprecision(4)<<s-v<<" ";
    cout<<fixed<<setprecision(4)<<v-r<<" ";
    cout<<fixed<<setprecision(4)<<r;
    return 0;
}