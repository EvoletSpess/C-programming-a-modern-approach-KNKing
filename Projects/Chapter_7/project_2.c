#include <stdio.h>

int main(void) {
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  getchar();

  for (i = 1; i <= n; i++) {
    if (i % 24 == 0) {
      printf("Press Enter to continue...");
      getchar();
    }
    printf("%10d%10d\n", i, i * i);
  }
  return 0;
}