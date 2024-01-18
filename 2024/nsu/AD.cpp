#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    vector<ll> a;

    ll k = n;

    if (n < 0)
        k = k * -1;

    while (k != 0)
    {
        int digit = k % 10;
        a.push_back(digit);
        /* code */
        k /= 10;
    }
    // ll k=a.size();

    // for(ll i=0;i<k;i++)
    // {
    //     cout<<a[i];
    // }
    int num = a[0];
    int flag = 0;

    if (n > 0)
    {
        if (num == 0)
        {
            for (auto it : a)
            {
                if (it == 0 && flag == 0)
                    continue;
                else if (it != 0)
                {
                    cout << it;
                    flag = 1;
                }
                else if (it == 0 && flag == 1)
                    cout << it;
            }
        }
        else
        {
            for (auto it : a)
                cout << it;
        }
    }
    else if (n == 0)
        cout << 0;

    else if (n < 0)
    {
        cout << "-";
        for (auto it : a)
        {
            if (it == 0 && flag == 0)
                continue;
            else if (it != 0)
            {
                cout << it;
                flag = 1;
            }
            else if (it == 0 && flag == 1)
                cout << it;
        }
    }
    else
    {
        for (auto it : a)
            cout << it;
    }
}
