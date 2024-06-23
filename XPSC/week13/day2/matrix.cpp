#include <bits/stdc++.h>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define nl '\n'

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// set = less ;; multiset = less_equal

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        vector<vector<int>> mat(row, vector<int>(col));
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }

        for (int k = 1; k <= 100; k++)
        {
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    if (i - 1 >= 0 && mat[i][j] > mat[i - 1][j])
                    {
                        mat[i][j] -= mat[i - 1][j];
                    }
                    else if (j - 1 >= 0 && mat[i][j] > mat[i][j - 1])
                    {
                        mat[i][j] -= mat[i][j - 1];
                    }
                    else if (j + 1 < col && mat[i][j] > mat[i][j + 1])
                    {
                        mat[i][j] -= mat[i][j + 1];
                    }
                    else if (i + 1 < row && mat[i][j] > mat[i + 1][j])
                    {
                        mat[i][j] -= mat[i + 1][j];
                    }
                }
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << nl;
        }
        /* code */
    }

    return 0;
}