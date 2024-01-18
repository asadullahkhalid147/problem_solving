#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<vector<int>> a(n, vector<int>(n));

            a[0][0] = 1;
            a[n - 1][n - 1] = n * n;
            int x = n * n - 1;

            for (int i = 1; i  < n-1; i++)
            {
                for (int j = i; j >= 0; j--, x--)
                {
                    a[i - j][j] = x;
                }
            }

            x = 2;
            for (int j = n - 2; j > 0; j--)
            {
                for (int i = 0; i < n - j; i++, x++)
                {
                    a[n - i - 1][i + j] = x;
                }
            }

            for (int i = n - 1; i >= 0; i--, x++)
            {
                a[i][n - i - 1] = x;
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            /* code */
        }
    }

    return 0;
}