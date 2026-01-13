#include <stdio.h>
int main(){
  char S;
  scanf("%c\n",&S);
  int n;
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++){
      printf("%c",S);
    }
    printf("\n");
  }
  return 0;
}
