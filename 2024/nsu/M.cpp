#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int i=1;
    while (cin>>s)
    {
        if(s[0]=='*')break;
        if(s[0]=='H')cout<<"Case "<< i<<": "<<"Hajj-e-Akbar"<<endl;
        else if(s[0]=='U')cout<<"Case "<< i<<": "<<"Hajj-e-Asghar"<<endl;
        
        i++;
        /* code */
    }
    
    return 0;
}