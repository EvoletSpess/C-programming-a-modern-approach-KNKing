#include <stdio.h>

int main() {
    float income, tax;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &income);
    if (income <= 750.00) {
        tax = 0.01 * income;
    } else if (income < 2250.00) {
        tax = 0.02 * (income - 750.00) + 7.50;
    } else if (income < 3750.00) {
        tax = 0.03 * (income - 2250.00) + 37.50;
    } else if (income < 5250.00) {
        tax = 0.04 * (income - 3750.00) + 82.50;
    } else if (income < 7000.00) {
        tax = 0.05 * (income - 5250.00) + 142.50;
    } else {
        tax = 0.06 * (income- 7000.00) + 230.00;
    }
    printf("Tax due: %.2f\n", tax);
    return 0;
}