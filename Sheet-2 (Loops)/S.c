#include <stdio.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=1; i<=t; i++){
    int x,y,st,end;
    scanf("%d %d",&x,&y);
    if(x>=y){
      st=y;
      end=x;
    }
    else{
      st=x;
      end=y;
    }
    int sum=0;
    for(int j=(st+1); j<end; j++){
      if(j%2 != 0) sum=sum+j;
    }
    printf("%d\n",sum);
  }
  return 0;
}