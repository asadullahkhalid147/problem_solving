#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;cin>>q;
    while (q--)
    {
        string s;cin>>s;
        int i=1;
        if(s[1]!='0')
        {
            cout<<s[0]<<" ";
            while (s[i]!='\0')
            {
                cout<<s[i];
                i++;
                /* code */
            }

        }
        else
        {
            cout<<s[0];
            while (s[i]=='0')
            {
                cout<<s[i];
                i++;
                /* code */
            }
            cout<<" ";
            while (s[i]!='\0')
            {
                cout<<s[i];
                /* code */
            }


        }
        /* code */
    }

    return 0;
}
