#include <stdio.h>
void Shift(int arr[],int n, int x)
{
    int swap[n+5];
    for(int i=0; i<x; i++){
        swap[0] = arr[n-1];
        for(int j=1; j<n; j++)
        {
            swap[j] = arr[j-1];
        }
        for(int k=0; k<n; k++){
            arr[k] = swap[k];
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",swap[i]);
    }
    printf("\n");
}
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int arr[n+5];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    Shift(arr,n,x);
}