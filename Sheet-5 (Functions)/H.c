#include <stdio.h>
void Print(int t){
    for(int i=0; i<t; i++){
        int n;
        char a;
        scanf("%d %c",&n,&a);
        for(int j=0; j<n; j++){
            printf("%c ",a);
        }
        printf("\n");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    Print(t);
}