#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n, &m);
    int arr[n+5][m+5];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m/2; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][m-j-1];
            arr[i][m-j-1] = temp;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}