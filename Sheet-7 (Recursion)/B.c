// #include <stdio.h>
// static int x = 1;
// int printRecursion(int n)
// {
//     if (x <= n){
//         printf("%d\n", x);
//         x++;
//     }
//     else
//         return 0;
//     printRecursion(n);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printRecursion(n);
// }

#include <stdio.h>
void printRecursion(int n){
    if(n==0) return;
    printRecursion(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printRecursion(n);
}