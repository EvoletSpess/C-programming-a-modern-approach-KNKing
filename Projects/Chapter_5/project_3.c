#include <stdio.h>

int main() {
    float commission, value, shares, price;

    printf("Enter the number of shares and the price per share: ");
    scanf("%f%f", &shares, &price);

    value = shares * price;

    if (value < 2500.00) {
        commission = 30.00 + .017 * value;
    } else if (value < 6250.00) {
        commission = 56.00 + .0066 * value;
    } else if (value < 20000.00) {
        commission = 75.00 + .0034 * value;
    } else if (value < 50000.00) {
        commission = 100.00 + .0022 * value;
    } else if (value < 500000.00) {
        commission = 155.00 + .0011 * value;
    } else {
        commission = 255.00 + .0009 * value;
    }

    if (commission < 39.00) {
        commission = 39.00;
    }

    printf("Broker commission: $%.2f\n", commission);

    if (shares < 2000) {
        commission = 33 + (0.03 * shares);
    } else {
        commission = 33 + (0.02 * shares);
    }

    printf("Rival commission: $%.2f\n", commission);

    return 0;
}