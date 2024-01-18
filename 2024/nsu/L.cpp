#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a(n);
    int e=0,o=0,idx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)e++;
        else o++;
    }
    if(e==1)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                idx=i+1;
                break;
            }
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                idx=i+1;
                break;
            }
        }
    }
    cout<<idx<<endl;
    
    return 0;
}