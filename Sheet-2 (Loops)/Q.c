#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
    long long int t;
    scanf("%lld",&t);
    if (t == 0) {
      printf("0\n");
      continue;
    }
    while(t != 0){
      printf("%d ",((int)t%10));
      t = t/10;
    }
    printf("\n");
  }
  return 0;
}