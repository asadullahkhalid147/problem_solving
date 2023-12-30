#include <stdio.h>

void ans(int n)
{
    if (n == 0)
        return;
    if (n != 1)
    {
        printf("%d ", n);
    }
    else
    {
        printf("%d", n);
    }

    ans(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    ans(n);
}