#include <stdio.h>

int main() {
    int n1, n2, n3, n4, smallest1, largest1, smallest2, largest2, smallest, largest;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    
    largest1 = smallest1 = n1;

    if (n1 <= n2) {
        smallest1 = n1;
        largest1 = n2;
    } else {
        smallest1 = n2;
        largest1 = n1;
    }

    if (n3 <= n4) {
        smallest2 = n3;
        largest2 = n4;
    } else {
        smallest2 = n4;
        largest2 = n3;
    }

    if (smallest1 <= smallest2) {
        smallest = smallest1;
    } else {
        smallest = smallest2;
    }

    if (largest1 >= largest2) {
        largest = largest1;
    } else {
        largest = largest2;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);
    return 0;
}

