#include <stdio.h>

int main() {
    // Initialization:
    int amount;
    int twenties, tens, fives, singles;

    // Input:
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    // Calculation module:
    twenties = amount / 20;
    amount -= twenties * 20;
    
    tens = amount / 10;
    amount -= tens * 10;
    
    fives = amount / 5;
    amount -= fives * 5;

    singles = amount / 1;

    // Output and exit:
    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenties, tens, fives, singles);
    return 0;
}
