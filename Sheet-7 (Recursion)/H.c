#include <stdio.h>
void printSpace(int x){
    if(x==0) return;
    printSpace(x-1);
    printf(" ");
}
void printStar(int i){
    if(i==0) return;
    printStar(i-1);
    printf("*");
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    for(int i=n; i>=1; i--){
        printSpace(x);
        x++;
        printStar(2*i-1);
        printf("\n");
    }
}