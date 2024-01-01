#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    long long int sum1=0,sum2=0,sum3=0,sum4=0;
    sum1=b+c+d+e;
    sum2=a+c+d+e;
    sum3=a+b+c+e;
    sum4=a+b+c+d;
    cout<<min({sum1,sum2,sum3,sum4})<<" "<<max({sum1,sum2,sum3,sum4})<<endl;
    return 0;
}