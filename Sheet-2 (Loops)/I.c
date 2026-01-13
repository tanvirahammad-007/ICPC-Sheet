#include <stdio.h>
int main(){
  long long int n,old_n,R,ans;
  scanf("%lld",&n);
  old_n = n;
  ans = n%10;
  n = n/10;
  while(n != 0){
    R = n%10;
    ans = (ans*10) + R;
    n = n/10;
  }
  printf("%lld\n",ans);
  if(ans == old_n) printf("YES");
  else printf("NO");
}
