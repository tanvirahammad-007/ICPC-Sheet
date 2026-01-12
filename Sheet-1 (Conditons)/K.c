#include <stdio.h>
int main(){
    int A, B, C, Max, Min;
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C || B >= A && B >= C)
        Max = (A >= B) ? A : B;
    else
        Max = C;
    if (A <= B && A <= C || B <= A && B <= C)
        Min = (A <= B) ? A : B;
    else
        Min = C;
    printf("%d %d\n",Min, Max);
    return 0;
}