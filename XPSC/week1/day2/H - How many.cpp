#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int a,b;cin>>a>>b;
    int cnt=0;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=a;j++)
        {
            for(int k=0;k<=a;k++)
            {
                if(i+j+k<=a && i*j*k<=b)cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
}
