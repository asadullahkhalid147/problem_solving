#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n][k];
    

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=k-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}