#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[10000000];
    scanf("%s",s);
    for(int i=0; i< strlen(s); i++){
        if(s[i]== ','){
            printf(" ");
        }
        else if(s[i]>='a' && s[i]<='z'){
            printf("%c",toupper(s[i]));
        }
        else if(s[i]>='A' && s[i]<='Z'){
            printf("%c",tolower(s[i]));
        }
    }
    printf("\n");
}
