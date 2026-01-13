#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int count =0;
        for(int j=1; j<=N; j++)
        {
            if((N%j)==0)
                count++;
        }
        if(count==2)
            printf("YES\n");
        else
            printf("NO\n");
}
