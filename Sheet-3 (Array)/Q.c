#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++)
  {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &arr[j]);
    }
    if (n == 1)
    {
      printf("1\n");
      continue;
    }
    int count = 0;
    for(int k=0; k<n; k++){
      count++;
      for (int j = k; j < n-1; j++)
      {
        if (arr[j] <= arr[j + 1]){
          count++;
        }
        else break;
      }
    }
    printf("%d\n", count);
  }
}