#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    while (cin >> s1 >> s2)
    {
        int i = 0, j = 0, cnt = 0;
        while (s1[i] != '\0')
        {
            if (s1[i] == s2[j])
            {
                cnt++;
                j++;
            }
            i++;

            /* code */
        }
        if (cnt == s2.size())
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }

    return 0;
}