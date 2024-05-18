#include <bits/stdc++.h>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define nl '\n'
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 2)
        {
            cout << "-1" << nl;
        }
        else if ((a + b) <= c)
        {
            cout << a + b << nl;
        }
        else
        {
            cout << (a + b + c) / 2 << nl;
        }
        /* code */
    }

    return 0;
}