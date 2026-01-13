#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int x = 0; x < t; x++)
    {
        char s[55], t[55];
        scanf("%s %s", s, t);
        int slen = strlen(s);
        int tlen = strlen(t);
        int i = 0, j = 0, k = 0;
        char newStr[110];
        while (i <= slen && j <= tlen)
        {
            if (i == slen)
            {
                newStr[k++] = t[j++];
                continue;
            }
            if (j == tlen)
            {
                newStr[k++] = s[i++];
                continue;
            }
            newStr[k++] = s[i++];
            newStr[k++] = t[j++];
        }
        printf("%s\n", newStr);
    }
}