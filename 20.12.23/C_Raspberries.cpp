#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int mn = INT_MAX;
        int even=0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int cnt = 0;
            if(x%2==0)even++;
            while (x % k != 0)
            {
                x++;
                cnt++;
                // cout<<"x="<<x<<"cnt="<<cnt<<endl;
            }
            mn = min(cnt, mn);
            // cout<<"mx="<<mx<<endl;
        }
        if(k!=4)cout<<mn<<endl;
        else
        {
            cout<<min(mn,(2-min(even,2)))<<endl;
        }

        /* code */
    }

    return 0;
}