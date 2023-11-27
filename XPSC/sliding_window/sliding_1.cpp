#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a.push_back(x);
    }

    int i=0,j=0,mx=INT_MIN,sum=0;

    while(j<n)
    {
        sum+=a[j];
        if(j<k-1)
        {

            j++;
        }
        else
        {
            mx=max(mx,sum);
            sum-=a[i];
            i++;

            sum+=a[j];
            j++;
        }
    }
}
