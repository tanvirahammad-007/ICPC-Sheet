// #include <stdio.h>
// void sum(int a, int b)
// {
//     printf("%d\n",a+b);
// }
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     sum(a,b);
// }


#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",sum(a,b));
}
