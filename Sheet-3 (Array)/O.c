#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int arr[N+5];
    arr[1] = 0;
    arr[2] = 1;
    for(int i = 3; i <= N; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    printf("%lld\n", arr[N]);
}
