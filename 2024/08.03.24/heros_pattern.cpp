#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n - 1;
    int z = n;
    int l = 0;
    int m = n;
    for (int i = 1; i <= (2*n)-1; i++)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= z; i++)
        {
            cout << "*";
        }
        for (int i = 1; i <= l; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= m; i++)
        {
            cout << "*";
        }
        if (i <= n - 1)
        {
            k--;
            z--;
            l+=4;
            m--;
        }
        else
        {
            k++;
            z++;
            l-=4;
            m++;
        }
        cout << endl;
    }
    return 0;
}