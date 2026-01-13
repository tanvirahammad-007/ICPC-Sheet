#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        int t;
        scanf("%d",&t);
        long long int fact=1;
        for(int j=1; j<=t; j++)
        {
            fact=fact*j;
        }
        printf("%lld\n",fact);
    }
}