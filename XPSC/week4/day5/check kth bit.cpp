#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int check_kth_bit_on_or_off(int x,int k)
{
    return(x>>k)&1;
}

void print_on_or_off_bits(int x)
{
    for(int k=0;k<=31;k++)
    {
        if(check_kth_bit_on_or_off(x,k))
        {
            cout<<1<<" ";
        }
        else cout<<0<<" ";
    }
    cout<<endl;
}

int turn_on_kth_bit(int x,int k)
{
    return(x|(1<<k));
}

int turn_off_kth_bit(int x, int k)
{
    return(x&(~(1<<k)));
}

int toggle_kth_bit(int x, int k)
{
    return (x^(1<<k));
}
int main()
{
//    cout<<check_kth_bit_on_or_off(44,3)<<endl;
//    cout<<check_kth_bit_on_or_off(44,4)<<endl;

//    print_on_or_off_bits(44);

//    cout<<turn_on_kth_bit(44,4)<<endl;

//      cout<<turn_off_kth_bit(44,3)<<endl;
        cout<<toggle_kth_bit(44,3)<<endl;
        cout<<toggle_kth_bit(44,4)<<endl;
}
