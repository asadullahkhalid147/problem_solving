#include<stdio.h>
int main()
{
    int a,b;char c;
    int e,f;char g;

    scanf("%d%c%d",&a,&c,&b);
    scanf("%d%c%d",&e,&f,&g);
    int h=0,m=0;
    if(a>e)
    {
        if(b>f)
        {
            h=24-a-1+e;
            m=60-b+f;
        }
        else if(f>b)
        {
            h=24-a+e;
            m=f-b;
        }
        else if(b==f)
        {
            h=24-a+e;
            m=0;
        }
    }
    else if(e>a)
    {
        if(b>f)
        {
            h=e-a-1;
            m=60-b+f;
        }
        else if(f>b)
        {
            h=e-a;
            m=f-b;
        }
        else if(b==f)
        {
            h=e-a;
            m=0;
        }
    }
    else if(a==e)
    {
        if(b>f)
        {
            h=24-a+e-1;
            m=60-b+f;
        }
        else if(f>b)
        {
            h=0;
            m=f-b;
        }
        else
        {
            h=0;
            m=0;
        }
    }
    printf("%d:%d",h/2,m/2);
    
    
}