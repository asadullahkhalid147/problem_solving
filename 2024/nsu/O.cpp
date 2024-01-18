#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int toast=(k*l)/nl;

    int ans=min({toast,(c*d),(p/np)})/n;
    cout<<ans<<endl;


    return 0;
}