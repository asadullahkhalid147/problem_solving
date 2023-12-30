#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int row,col,x,y,d;cin>>row>>col>>x>>y>>d;
        int flag=1,cnt=1;

        for(int i=1;i<=col;i++)
        {
//            cout<<1<<","<<i<<"--"<<endl;
//            cout<<abs(1-x)+abs(i-y)<<","<<flag<<endl;
            if(abs(1-x)+abs(i-y)<=d) flag=0;

//            cout<<row<<","<<i<<"^^"<<endl;
//            cout<<abs(row-x)+abs(i-y)<<","<<cnt<<endl;
            if(abs(row-x)+abs(i-y)<=d) cnt=0;
        }
        for(int i=1;i<=row;i++)
        {
//            cout<<i<<","<<col<<"**"<<endl;
//            cout<<abs(i-x)+abs(col-y)<<","<<flag<<endl;
            if(abs(i-x)+abs(col-y)<=d) flag=0;
//
//            cout<<i<<","<<1<<"##"<<endl;
//            cout<<abs(i-x)+abs(1-y)<<","<<cnt<<endl;
            if(abs(i-x)+abs(1-y)<=d) cnt=0;
        }

        if(flag || cnt)cout<<(row-1)+(col-1)<<endl;
        else cout<<-1<<endl;
    }
}
