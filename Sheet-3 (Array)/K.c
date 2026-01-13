#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  char num[n + 5];
  scanf("%s", num);
  int arr[n + 5], sum = 0;
  for (int i = 0; i < n; i++)
  {
    arr[i] = num[i] - 48;
    sum = sum + arr[i];
  }
  printf("%d\n", sum);
}