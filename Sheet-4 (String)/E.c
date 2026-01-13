#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000000];
    scanf("%s",s);
    int sum=0;
    for(int i=0; i< strlen(s); i++){
        if(s[i]>='0' && s[i]<='9'){

            sum += s[i] - 48;
        }
    }
    printf("%d\n",sum);
}
