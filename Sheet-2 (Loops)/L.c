#include <stdio.h>
int main(){
  int a,b,x,ans;
  scanf("%d %d",&a,&b);
  if(a>=b) x=b;
  else x=a;
  for(int i=1; i<=x; i++){
    if(a%i == 0 && b%i == 0) ans = i;
  }
  printf("%d\n",ans);
  return 0;
}