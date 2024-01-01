#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int sum=0L;
    for(int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        sum+=x;
    }
    cout<<sum<<endl;
    return 0;
}