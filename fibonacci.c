#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (fibo(n - 1) + fibo(n - 2));
}
int main()
{
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    printf("\n%d",fibo(n-1));

    return 0;
}
