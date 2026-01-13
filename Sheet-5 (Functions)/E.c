#include <stdio.h>
void swap(int x,int y)
{
    printf("%d %d\n",y,x);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(x,y);
}