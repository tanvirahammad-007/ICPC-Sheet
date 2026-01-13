// #include <stdio.h>
// void Print(int n)
// {
//     int a[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//     }
//     int b[n];
//     for(int i=0; i<n; i++){
//         scanf("%d",&b[i]);
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ",b[i]);
//     }
//     for(int i=0; i<n; i++){
//         printf("%d ",a[i]);
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     Print(n);
// }


#include <stdio.h>
int Print(int n)
{
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0; i<n; i++){
        scanf("%d",&b[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",b[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    Print(n);
}
