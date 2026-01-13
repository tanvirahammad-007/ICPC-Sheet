#include <stdio.h>
int main(){
  int n,a,b,st,end;
  scanf("%d %d %d",&n,&a,&b);
    if(a>=b){
      st=b;
      end=a;
    }
    else{
      st=a;
      end=b;
    }
  int sumf = 0;
  for(int i=st; i<=n; i++){
    int sum = 0,r,x;
    x = i;
    while(x != 0){
      r=x%10;
      sum = sum + r;
      x=x/10;
    }
    if(sum>=st && sum<=end) sumf = sumf + i;
  }
  printf("%d\n",sumf);
  return 0;
}
