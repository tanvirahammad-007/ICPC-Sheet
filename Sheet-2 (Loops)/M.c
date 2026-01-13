#include <stdio.h>
int main(){
  int a,b,st,end,el=0;
  scanf("%d %d",&a,&b);
    if(a>=b){
      st=b;
      end=a;
    }
    else{
      st=a;
      end=b;
    }
  for(int i=st; i<=end; i++){
    int t,r,count=0;
    t = i;
    while(t != 0){
      r = t%10;
      if(r!=4 && r!=7) count++;
      t = t/10;
    }
    if(count == 0){ 
      printf("%d ",i);
      el++;
    }
  }
  if(el == 0) printf("-1\n");
  return 0;
}