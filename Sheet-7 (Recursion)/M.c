#include <stdio.h>
long long int sum(int arr[],int n, int m)
{
    if(n==m)
        return 0;
    return arr[n] + sum(arr,n-1,m);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n+5];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    long long int ans = sum(arr,n-1,n-m-1);
    printf("%lld\n",ans);
}
