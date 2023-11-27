#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }

        vector<int>vec;
        vec.push_back(a[0]);
        int cnt=0,flag=1;
        for(int i=0; i<n-1; i++)
        {
            cnt+=a[i];
            if(a[i+1]==0)
            {
                vec.push_back(cnt+a[i+1]);
            }
            else
            {
                if((cnt+a[i+1]>=0) && (cnt-a[i+1]<0))vec.push_back(cnt+a[i+1]);
                    else
                    {
                        flag=0;
                        break;
                    }
            }
        }
        if(flag==1)
        {
            for(int i=0; i<n; i++)cout<<vec[i]<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
}
