#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    long long mm=0;
    for(int i=0;i<n;i++)
    {
        long long x;cin>>x;
        mm=max(mm,x);
    }

    mm--;
    long long ans=(mm*(mm+1))/2;
    if(ans>=k)cout<<"Dablu"<<endl;
    else cout<<"Hablu"<<endl;

    //  k-=ans;
    // if(k>=1)cout<<"Hablu"<<endl;
    // else cout<<"Dablu"<<endl;
    return 0;
}