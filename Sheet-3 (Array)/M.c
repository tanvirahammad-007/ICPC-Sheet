#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int arr[n+5];
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  int min=arr[0],max=arr[0],minpos=0,maxpos=0;
  for(int i=0; i<n; i++){
    if(min > arr[i]){
      min = arr[i];
      minpos = i;
    }
    if(max < arr[i]){
      max = arr[i];
      maxpos = i;
    }
  }
  arr[minpos] = max;
  arr[maxpos] = min;
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}