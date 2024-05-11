#include <bits/stdc++.h>
using namespace std;

int main()
{

    bool flag = false;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        set<int> st;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        bool flag=true;
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            cnt=max(a[i]-v[i],cnt);
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]-v[i]<cnt && v[i]!=0)
            {
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}