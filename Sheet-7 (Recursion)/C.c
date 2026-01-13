#include <stdio.h>
void printRecursion(int n){
    if(n==0) return;
    printf("%d",n);
    if(n>1) printf(" ");
    printRecursion(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printRecursion(n);
}