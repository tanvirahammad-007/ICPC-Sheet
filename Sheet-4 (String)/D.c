#include <stdio.h>
#include <string.h>
int main()
{
    char a[30];
    char b[30];
    scanf("%s %s",a,b);
    int len = strlen(a);
    char cpy[len];
    strcpy(cpy, a );
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s\n",strcat(a,b));
    char temp = cpy[0];
    cpy[0] = b[0];
    b[0] = temp;
    printf("%s %s\n",cpy,b);
}