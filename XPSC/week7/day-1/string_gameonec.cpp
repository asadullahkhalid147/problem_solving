#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;string s;
        cin>>n>>s;
        

        stack<char>st;
        int cnt=0;
        for(auto i:s)
        {
            if(!st.empty() && st.top()!=i)
            {
                st.pop();
                cnt++;
            }
            else st.push(i);
        }
        if(cnt%2)
        {
            cout<<"Zlatan"<<endl;
        }
        else cout<<"Ramos"<<endl;
        /* code */
    }
    
    return 0;
}