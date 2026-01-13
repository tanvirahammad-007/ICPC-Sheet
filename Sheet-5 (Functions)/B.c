// #include <stdio.h>
// void Print(int n)
// {
//     for(int i=1; i<=n; i++)
//     {
//         printf("%d",i);
//         if(i==n)
//             break;
//         else
//             printf(" ");
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     Print(n);
// }


#include <stdio.h>
int Print(int n)
{
    for(int i=1; i<=n; i++)
    {
        printf("%d",i);
        if(i==n)
            break;
        else
            printf(" ");
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    Print(n);
}
