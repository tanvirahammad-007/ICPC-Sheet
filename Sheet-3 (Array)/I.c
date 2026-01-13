#include <stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=1; i<=t; i++){
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int j=1; j<=n; j++){
      scanf("%d",&arr[j]);
    }
    long long int min=99999999999;
    long long int sum;
    for(int k=1; k<=n; k++){
      for(int l=2; l<=n; l++){
        if(l>k){
          sum = arr[k] + arr[l] + l - k;
          if(min>sum) min=sum;
        }
      }
    }
    printf("%lld\n",min);
  }
}