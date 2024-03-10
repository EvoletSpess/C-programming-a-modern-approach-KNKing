#include <stdio.h>

int main(void) {
  int monthDays, weekStart;
  printf("Enter number of days in month: ");
  scanf("%d", &monthDays);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &weekStart);

  for (int n = 1; n < weekStart; n++) {
    printf("   ");
  }

  for (int i = 1; i <= monthDays; i++) {
    printf("%3d", i);
    if (weekStart % 7 == 0) printf("\n");
    weekStart++;
  }
  
  printf("\n");
  return 0;
}