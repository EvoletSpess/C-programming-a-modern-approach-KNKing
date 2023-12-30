#include <stdio.h>

int main() {
    // Initialization:
    double loan, rate, monthly_rate, payment;

    // Input:
    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);
    
    // Calculation and output module:
    monthly_rate = (rate / 12.0 / 100.0) + 1.0;

    for (int i = 0; i < 3; i++) {
        loan = loan * monthly_rate - payment;
        switch (i)
        {
        case 0:
            printf("Balance remaining after first payment: $%.2lf\n", loan);
            break;
        case 1:
            printf("Balance remaining after second payment: $%.2lf\n", loan);
            break;
        case 2:
            printf("Balance remaining after third payment: $%.2lf\n", loan);
            break;
        default:
            break;
        }
        
    }

    // Exit:
    return 0;
}
