#include <stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=1; i<=t; i++){
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int j=0; j<n; j++){
      scanf("%d",&arr[j]);
    }
    int maxi[n*n],x=0;
    for(int k=0; k<n; k++){
      int max= arr[k];
      for(int l=k; l<n; l++){
        if(max < arr[l]){
          max = arr[l];
          maxi[x] = arr[l];
          x++;
        } 
        else{
          maxi[x] = max;
          x++;
        }
      }
    }
    for(int m=0; m<x; m++){
      printf("%d ",maxi[m]);
    }
    printf("\n");
  }
}