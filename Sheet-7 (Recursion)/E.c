#include <stdio.h>
void printbinary(int n)
{
    if (n == 0)
        return;
    printbinary(n / 2);
    printf("%d", n % 2);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int num;
        scanf("%d", &num);
        if (num == 0)
        {
            printf("0\n");
            continue;
        }
        printbinary(num);
        printf("\n");
    }
}