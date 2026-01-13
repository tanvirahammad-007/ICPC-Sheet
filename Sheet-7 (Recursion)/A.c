#include <stdio.h>
void printRecursion(int n){
    if(n==0) return;
    printRecursion(n-1);
    printf("I love Recursion\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    printRecursion(n);
}