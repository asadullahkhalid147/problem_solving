#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    int b[3];
    vector<int> v;

    for (int i = 0; i < 3; i++)
        cin >> a[i];
    for (int i = 0; i < 3; i++)
        cin >> b[i];

    int aa = 0, bb = 0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            aa++;
        }
        else if (a[i] < b[i])
        {
            bb++;
        }
    }
    cout<<aa<<" "<<bb<<endl;

    return 0;
}