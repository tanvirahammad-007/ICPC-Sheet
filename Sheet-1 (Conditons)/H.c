#include<stdio.h>
#include<math.h>
int main()
{
 int A,B;
 scanf("%d %d",&A,&B);
 printf("floor %d / %d = %.0f\n",A,B,floor((float)A/B));
 printf("ceil %d / %d = %.0f\n",A,B,ceil((float)A/B));
 printf("round %d / %d = %.0f\n",A,B,round((float)A/B));
 return 0;
}
