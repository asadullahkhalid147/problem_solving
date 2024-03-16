// Problem Setter - Mazharul Islam Rifat
// Solution - Rahat Khan Pathan
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;

            pq.push(x);
        }
        else if (t == 2)
        {
            if (!pq.empty())
            {
                cout << pq.top() << '\n';
                int ans = pq.top();
                while (!pq.empty() && pq.top() == ans)
                {
                    pq.pop();
                }
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }
    return 0;
}