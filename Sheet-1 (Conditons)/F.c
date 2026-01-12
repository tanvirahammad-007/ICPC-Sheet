#include<stdio.h>
int main()
{
    long long int N,M,sum;
    scanf("%lld %lld" ,&N,&M);
    sum = N%10 + M%10;
    printf("%lld\n",sum);
 return 0;
}