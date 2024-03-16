#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> pr(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    pr[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pr[i] = pr[i - 1] + a[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        /* code */
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long int ans = pr[r] - pr[l - 1];
        long long int res = r - l + 1;
        if (ans == res)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}