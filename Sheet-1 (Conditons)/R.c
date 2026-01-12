#include <stdio.h>
int main(){
  int N,year,month,day;
  scanf("%d",&N);
  year = N/365;
  N = N % 365;
  month = N/30;
  day = N % 30;
  printf("%d years\n", year);
  printf("%d months\n", month);
  printf("%d days\n", day);
}
