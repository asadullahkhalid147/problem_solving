#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int t = 1;
    int flag=0;

    if (c > a && d > b) flag=0;
    else
    {
        while (t != 10000)
        {
            if((a+(b*t))==(c+(d*t)))
            {
                flag=1;
                break;
            }
            t++;
            // cout<<t<<endl;
            /* code */
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO";

    return 0;
}