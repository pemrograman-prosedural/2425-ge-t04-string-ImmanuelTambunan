// 12S24034 - Immanuel Alexander Tambunan
// 12S24046 - Indah Elsadai Nainggolan
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char str[21];
  int i;

  fgets(str, sizeof(str), stdin);

  if (str[strlen(str) - 1] == '\n') {
    str[strlen(str) - 1] = '\0';
  }

  for (i = 0; str[i] != '\0'; i++) {
      printf("%03d", str[i]);
  }
  printf("013");
  return 0;
}

  
