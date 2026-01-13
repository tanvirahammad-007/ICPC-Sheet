#include <stdio.h>
#include <math.h>
int equation(int x,int y)
{
    if(y<=1){
        printf("0\n");
        return 0;
    }
    int z=2;
    long long ans = 0;
    while(z<=y){
        ans += pow(x,z);
        z += 2;
    }
    printf("%lld\n",ans);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    equation(x,y);
}