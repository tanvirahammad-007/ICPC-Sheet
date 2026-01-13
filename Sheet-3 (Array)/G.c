#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int array[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    int i=0, j = N-1;
    while(i < j)
    {
        if(array[i] != array[j])
        {
            printf("NO\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("YES\n");
}
