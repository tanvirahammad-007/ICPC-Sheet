#include<stdio.h>
int main()
{
    long long int A,B,C,D,multi, multi2, ans;
    scanf("%lld %lld %lld %lld",&A,&B,&C,&D);
    multi = (A*B)%100;
    multi2 = (C*D)%100;
    ans = (multi*multi2)%100;
    printf("%02lld\n",ans);
 return 0;
}
