#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        char str[100000];
        scanf("%s", str);
        if (strstr(str, "010") != NULL || strstr(str, "101") != NULL)
            printf("Good\n");
        else
            printf("Bad\n");
    }
}