#include <stdio.h>
int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A<=B && A<=C){
        printf("%d\n",A);
        if(B<=C){
            printf("%d\n%d\n",B,C);
        }else
            printf("%d\n%d\n",C,B);
    }
    else if(B<=A && B<=C){
        printf("%d\n",B);
        if(A<=C){
            printf("%d\n%d\n",A,C);
        }else
            printf("%d\n%d\n",C,A);
    }
    else if(C<=B && C<=A){
        printf("%d\n",C);
        if(B<=A){
            printf("%d\n%d\n",B,A);
        }else
            printf("%d\n%d\n",A,B);
    }

    printf("\n%d\n%d\n%d\n",A,B,C);
    return 0;
}
