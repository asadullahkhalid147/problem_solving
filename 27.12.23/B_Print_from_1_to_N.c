#include<stdio.h>

void fuck(int n,int i)
{
    if(i==n+1) return;
    printf("%d\n",i);
    fuck(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    fuck(n,i);
}