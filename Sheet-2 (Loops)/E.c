#include<stdio.h>
int main()
{
    int N;
    int max=-999999;
    scanf("%d",&N);
    for(int i=1; i<=N; i++){
        int x;
        scanf("%d",&x);
        if(max<x) max=x;
    }
    printf("%d\n",max);
}
