#include <stdio.h>

int main(void) {
  int n, square, counter;
  scanf("%d", &n);
  counter = 0;
  if (n > 0) {
    while (counter != n) {
      square = counter * counter;
      if (square % 2 == 0 && square <= n && square > 0) {
        printf("%d\n", square);
      }
      counter++;
    }
  }

  return 0;
}