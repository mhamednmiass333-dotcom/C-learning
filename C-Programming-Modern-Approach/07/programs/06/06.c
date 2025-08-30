#include <stdio.h>

int main() {
  char a;

  printf("Enter phone number : ");

  while ((a = getchar()) != '\n')
    if ((a >= 'A' && a < 'Z') && a != 'Q')
      printf("%d", ((a - 'A' - (a > 'Q')) / 3) + 2);

  return 0;
}
