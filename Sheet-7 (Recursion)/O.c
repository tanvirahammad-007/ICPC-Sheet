#include <stdio.h>
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int ans = fibo(n-1);
    printf("%d\n", ans);
}