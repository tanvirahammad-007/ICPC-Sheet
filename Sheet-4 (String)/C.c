#include <stdio.h>
#include <string.h>
int main()
{
    char s[25],t[25];
    scanf("%s %s",s,t);
    if(strcmp(s,t)>0){
        printf("%s\n",t);
    }
    else printf("%s\n",s);
}