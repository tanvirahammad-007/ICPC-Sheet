#include<stdio.h>
int main()
{
    int x;
    for(int i=1; ; i++)
    {
        scanf("%d",&x);
        if(x!=1999)
            printf("Wrong\n");
        if(x==1999)
        {
            printf("Correct\n");
            break;
        }

    }
}
