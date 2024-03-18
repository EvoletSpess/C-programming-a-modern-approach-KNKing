#include <stdio.h>

int main(void) {
    double n, sum = 0.0;
    printf("This program sums a series of floating poing numbers.\n");
    printf("Enter numbers (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %g\n", sum);
    return 0;
}