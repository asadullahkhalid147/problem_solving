#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */

        string s;
        cin >> s;
        vector<char>v;

        for (int i = 0; i < s.size() - 1; i++)
        {
            v.push_back(s[i]);
        }
        for(auto a:v)
        {
            cout<<a;
        }
        cout<<endl;

        
    }
}