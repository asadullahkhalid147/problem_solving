#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int l=n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int i=0;
        while(l--)
        {
            int x;cin>>x;

            while (x--)
            {
                char c;cin>>c;
                if(c=='U')
                {
                    v[i]--;
                }
                else v[i]++;
            }

            i++;
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]%10>=0)
            {
                cout<<v[i]%10<<" ";
            }
            else
            {
                cout<<(v[i]%10)+10<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}
