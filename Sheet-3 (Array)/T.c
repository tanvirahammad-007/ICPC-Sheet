#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int matrix[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }
  int sum1 = 0;
  int sum2 = 0;
  int x = n - 1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        sum1 = sum1 + matrix[i][j];
        sum2 = sum2 + matrix[i][x];
        x--;
      }
    }
  }
  int ans = sum1 - sum2;
  if (ans < 0)
    printf("%d\n", (ans * -1));
  else
    printf("%d\n", ans);
}