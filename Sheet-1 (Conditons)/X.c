#include <stdio.h>
int main(){
  long long int l1,l2,r1,r2,first,last;
  scanf("%lld %lld %lld %lld",&l1,&r1,&l2,&r2);
  first = (l1>l2)? l1:l2;
  last = (r1<r2)? r1:r2;
  if (first <= last) printf("%lld %lld\n",first,last);
  else printf("-1\n");
}