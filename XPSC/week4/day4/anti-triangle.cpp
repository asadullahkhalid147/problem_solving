#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
const int mod = 1e9;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll t,k;
        cin>>t>>k;
        int i=2;
        vector<int>vec;
        while(true)
        {
            if(vec.size()==t || (k*i)>mod)
            {
                break;

            }
            vec.push_back(k*i);
            i++;
        }

        if(vec.size()<t)
        {
            int z = k/2;
            while(true)
            {

                if(vec.size()==t)break;
                vec.push_back(z);
                z--;
            }
        }
//        for(int j=0;j<vec.size();j++)cout<<vec[j]<<" ";
        for(auto val:vec)cout<<val<<" ";
        cout<<endl;
    }
}
