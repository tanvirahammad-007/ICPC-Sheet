#include <stdio.h>
#include <string.h>
int main() {
  int T;
  char word[100];
  scanf("%d", &T);
  while (T--) {
    scanf("%s", word);
    if (strlen(word) > 10) {
      int len = strlen(word) - 2;
      printf("%c%d%c\n", word[0], len, word[strlen(word) - 1]);
    } else {
      printf("%s\n", word);
    }
}
  return 0;
}
