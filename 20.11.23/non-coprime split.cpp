
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int l,r;
	cin>>l>>r;
	for(int i=max(4,l);i<=r;i++)
	{
		for(int j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				cout<<j<<" "<<i-j<<endl;
				return;
			}
		}
	}
	cout<<-1<<endl;
}
 signed main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
