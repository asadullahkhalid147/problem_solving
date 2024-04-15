#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const ll mod = 1e9 + 7;

int main()
{
    cout<<"Left shift"<<endl;
    cout<<(44<<1)<<endl;
    cout<<(44<<2)<<" "<<(44*(2*2))<<endl;;
    cout<<(44<<3)<<" "<<(44*(2*2*2))<<endl;

    cout<<"Right Shift"<<endl;
    cout<<(44>>1)<<endl;
    cout<<(44>>2)<<" "<<(44/(2*2))<<endl;;
    cout<<(44>>3)<<" "<<(44/ (2*2*2));
}
