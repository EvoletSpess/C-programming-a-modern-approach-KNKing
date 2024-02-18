#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
    
    int firstSum = n1 + n3 + n5 + n7 + n9 + n11;
    int secondSum = n2 + n4 + n6 + n8 + n10;
    int total = 3 * firstSum + secondSum;
    int checkDigit = 9 - ((total - 1) % 10);

    printf("Check digit: %d\n", checkDigit);
    return 0;
}
