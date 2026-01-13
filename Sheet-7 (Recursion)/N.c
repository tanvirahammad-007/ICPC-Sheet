#include <stdio.h>
void printSum(int x[][105], int y[][105], int k, int c, int i, int j)
{
    if (j == c)
    {
        printf("\n");
        j = 0;
        i++;
        if(i == k) return;
    }
    printf("%d ",  x[i][j] + y[i][j]);
    printSum(x, y, k, c, i, j+1);
}
int main()
{
    int k, c;
    scanf("%d %d", &k, &c);
    int a[105][105];
    int b[105][105];
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printSum(a, b, k, c, 0, 0);
}