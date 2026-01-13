#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  int count = 0;
  while(1){
    int i;
    for(i=0; i<n; i++){
      if(arr[i]>0 && arr[i]%2 == 0){
        arr[i] /= 2;
      }
      else break;
    }
    if(i != n) break;
    count++;
  }
  printf("%d\n",count);
}