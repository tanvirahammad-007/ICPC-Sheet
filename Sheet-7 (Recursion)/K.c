#include <stdio.h>
int max = -2147483647;
int findMax(int arr[], int n)
{
    if (n < 0)
        return max;
    if (arr[n] > max)
        max = arr[n];
    return findMax(arr, n - 1);
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
    int ans = findMax(arr, n - 1);
    printf("%d\n", ans);
}