#include <stdio.h>
#include <string.h>
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  char s[a + b + 5];
  scanf("%s", s);
  if (s[a] != '-')
  {
    printf("No\n");
    return 0;
  }
  for (int i = 0; i < strlen(s); i++)
  {
    if (i == a) continue;
    if (s[i] >= '0' && s[i] <= '9')
      continue;
    else
    {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
}