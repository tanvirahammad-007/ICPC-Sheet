// #include <stdio.h>
// float avg(int n)
// {
//     float arr[n];
//     for(int i=0; i<n; i++)
//     {
//         scanf("%f",&arr[i]);
//     }
//     double sum = 0;
//     for(int i=0; i<n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     float avgg = sum/n;
//     return avgg;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     printf("%.6f\n",avg(n));
// }


#include <stdio.h>
void avg(int n)
{
    float arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%f",&arr[i]);
    }
    double sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("%.6f\n",sum/n);
}
int main()
{
    int n;
    scanf("%d",&n);
    avg(n);
}
