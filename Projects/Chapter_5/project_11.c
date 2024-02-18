#include <stdio.h>

int main() {
    int d1, d2, number, unique;
    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &d1, &d2);
    number = d1 * 10 + d2;
    printf("You entered the number ");
    unique = 0;
    switch (number) {
        case 10:
            printf("ten");
            unique = 1;
            break;
        case 11:
            printf("eleven");
            unique = 1;
            break;
        case 12:
            printf("twelve");
            unique = 1;
            break;
        case 13:
            printf("thirteen");
            unique = 1;
            break;
        case 14:
            printf("fourteen");
            unique = 1;
            break;
        case 15:
            printf("fifteen");
            unique = 1;
            break;
        case 16:
            printf("sixteen");
            unique = 1;
            break;
        case 17:
            printf("seventeen");
            unique = 1;
            break;
        case 18:
            printf("eighteen");
            unique = 1;
            break;
        case 19:
            printf("nineteen");
            unique = 1;
            break;
    }
    if (unique != 1) {
        switch (d1) {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
            default:
                break;
        }

        switch (d2) {
            case 1:
                printf("-one");
                break;
            case 2:
                printf("-two");
                break;
            case 3:
                printf("-three");
                break;
            case 4:
                printf("-four");
                break;
            case 5:
                printf("-five");
                break;
            case 6:
                printf("-six");
                break;
            case 7:
                printf("-seven");
                break;
            case 8:
                printf("-eight");
                break;
            case 9:
                printf("-nine");
                break;
            default:
                break;
        }
    }
    printf(".\n");
    return 0;
}