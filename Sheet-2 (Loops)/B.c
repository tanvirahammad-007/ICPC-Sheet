#include<stdio.h>
int main()
{
    int N,no=0;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            no++;
        }

    }
    if(no==0)
        printf("-1");
}

