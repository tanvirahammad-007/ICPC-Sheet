#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    if (N <= 0) {
        printf("NO\n");
        return 0;
    }

    while (N % 2 == 0) {
        N /= 2;
    }

    if (N == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
