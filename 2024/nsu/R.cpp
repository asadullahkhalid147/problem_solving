#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    double result = acos(-1.0);
    while (t--)
    {
        /* code */

        float l;
        cin >> l;
        float w = (6 * l) / 10;
        float r = (2 * l) / 10;

        float a, b;
        a = l * w;
        b = result * (r * r);

        cout << fixed << setprecision(2) << b << " ";
        cout << fixed << setprecision(2) << a - b;

        return 0;
    }
}