#include<stdio.h>
#define a 3.141592653
int main()
{
    float R;
    scanf("%f",&R);
    double area = a*R*R;
    printf("%.9f",area);
    return 0;
}
