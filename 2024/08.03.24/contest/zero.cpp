#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            if (i == j || (i + j == 2 * n))
            {
                cout << k;
            }
            else
            {
                cout << " ";
            }
        }
        k++;
        if(k==3)k=0;
        cout << endl;
    }
    return 0;
}