#include <stdio.h>
void printDigit(int n)
{
    if (n == 0)
        return;
    printDigit(n / 10);
    printf("%d ", n % 10);
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

        printDigit(num);
        printf("\n");
    }
}