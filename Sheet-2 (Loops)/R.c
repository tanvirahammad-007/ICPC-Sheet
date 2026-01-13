#include <stdio.h>
int main()
{
  while(1){
    int n,m,x,y;
    scanf("%d %d",&n,&m);
    if(n <= 0 || m <= 0) break;;
    if(n>=m){
      x=m;
      y=n;
    }
    else{
      x=n;
      y=m;
    }
    int sum = 0;
    for(int i=x; i<=y; i++){
      printf("%d ",i);
      sum = sum+i;
    }
    printf("sum =%d\n",sum);
  }
  return 0;
}
