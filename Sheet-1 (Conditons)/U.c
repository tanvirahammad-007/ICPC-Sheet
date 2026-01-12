#include<stdio.h>
int main(){
  float N,j;
  int i;
  scanf("%f",&N);
  i = (int)N;
  j= N-i;
  if(i==N){
     printf("int %d",i);
  }
  else{
    printf("float %d %f",i,j);
  }
}

