#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n, &m);
    int arr[n+5][m+5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            scanf("%d",&arr[i][j]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j] == x)
            {
                printf("will not take number\n");
                return 0;
            }
        }
    }
    printf("will take number\n");
}
