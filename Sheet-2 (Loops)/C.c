#include<stdio.h>
int main()
{
    int N;
    int pos=0,neg=0,even=0,odd=0;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        long long int x;
        scanf("%lld",&x);
        if(x%2==0) even++;
        else odd++;
        if(x>0) pos++;
        else if(x<0) neg++;
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

}

