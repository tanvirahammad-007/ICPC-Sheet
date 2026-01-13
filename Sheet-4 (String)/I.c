#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1005];
    scanf("%s",s);
    int x=0;
    char cpy[1005];
    for(int i=strlen(s)-1; i>=0; i--){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = tolower(s[i]);
        }
        cpy[x] = s[i];
        x++;
    }
    for(int i=0; i<strlen(s); i++){
        if(cpy[i] != s[i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}
