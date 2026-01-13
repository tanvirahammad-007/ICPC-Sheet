#include <stdio.h>
long long int findSum(int arr[],int n)
{
    if(n<0) return 0;
    return arr[n]+findSum(arr,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    long long int sum = findSum(arr,n-1);
    printf("%.6f",sum/(float)n);
}