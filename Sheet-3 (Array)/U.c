#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int pos = 0;
    for (int i = 0; i < m; i++)
    {
        int track = 0;
        for (int j = pos; j < n; j++)
        {
            if (arr2[i] == arr1[j])
            {
                track = 1;
                pos = j+1;
                break;
            }
        }
        if (track)
        {
            continue;
        }
        else
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}