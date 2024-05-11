#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  string s;
  cin>>s;
  int m=0;
  int n=s.size();
  int k=0;
  for (int i = 1; i <n; i++)
  {
    if(s[i]!=s[i-1]) k++;
    if(s[i]=='1'&&s[i-1]=='0')m++;
  }
  if(m!=0) cout<<k<<endl;
  else cout<<k+1<<endl;
}
}