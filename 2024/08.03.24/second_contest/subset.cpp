#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[1005][1005];
ll m = 1e9 + 7;
int subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    if (dp[n][s] != -1)
        return dp[n][s];
    if (a[n - 1] <= s)
    {
        int op1 = subset_sum(n - 1, a, s - a[n - 1]);
        int op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 + op2;
    }
    else
    {
        return dp[n][s] = subset_sum(n - 1, a, s);
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        int s = (d + sum) / 2;

        int s;
        cin >> s;
        bool dp[n + 1][s + 1];
        dp[0][0] = true;
        for (int i = 1; i <= s; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i - 1]] + dp[i - 1][j];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        cout<<dp[n][s]<<endl;
        /* code */
    }
}

// input:
// 6
// 1 2 3 4 5 6
// 7

// output:
// 4