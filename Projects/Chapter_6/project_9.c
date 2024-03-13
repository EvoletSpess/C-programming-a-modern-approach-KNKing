#include <stdio.h>

int main(void) {
    double loan, rate, monthly_rate, payment;
    int numberPayments;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &numberPayments);
    
    monthly_rate = (rate / 12.0 / 100.0) + 1.0;

    for (int i = 1; i <= numberPayments; i++) {
        loan = loan * monthly_rate - payment;
        printf("Balance remaining after %d payments: $%.2lf\n", i, loan);
    }

    return 0;
}
