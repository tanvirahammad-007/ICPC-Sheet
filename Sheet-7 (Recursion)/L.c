#include <stdio.h>
long long int sum(int arr[],int n)
{
    if(n<0)
        return 0;
    return arr[n] + sum(arr,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long int ans = sum(arr,n-1);
    printf("%lld\n",ans);
}
