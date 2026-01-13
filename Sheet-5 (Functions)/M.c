#include <stdio.h>
void distinct(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                x = 1;
                break;
            }
        }
        if (x)
            continue;
        else
            count++;
    }
    printf("%d\n",count);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    distinct(arr, n);
}