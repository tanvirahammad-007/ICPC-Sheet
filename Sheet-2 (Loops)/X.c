#include <stdio.h>
#include <math.h>
int main(){
  int t;
  scanf("%d",&t);
  for(int i=1; i<=t; i++){
    int n;
    scanf("%d",&n);
    int j=n;
    int x = 0,ans = 0;
    while(j != 0){
      if(j%2!=0){ 
        ans = ans + pow(2,x);
        x++;
      }
      j=j/2;
    }
    printf("%d\n",ans);
  }
}