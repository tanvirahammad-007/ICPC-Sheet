#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
            continue;
        count++;
    }
    printf("%d\n",count);
}