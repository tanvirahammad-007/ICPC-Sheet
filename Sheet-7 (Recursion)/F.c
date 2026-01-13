#include <stdio.h>
void printEven(int arr[], int n)
{
    if (n == 0)
    {
        printf("%d", arr[0]);
        return;
    }
    printf("%d ", arr[n]);
    printEven(arr, n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n % 2 == 0)
    {
        printEven(arr, n - 2);
    }
    else
    {
        printEven(arr, n - 1);
    }
}