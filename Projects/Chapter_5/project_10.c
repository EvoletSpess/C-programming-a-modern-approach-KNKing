#include <stdio.h>

int main() {
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    printf("Letter grade: ");
    switch ((grade + 9) / 10)
    {
    case 10:
        printf("A");
        break;
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        if (grade < 60 && grade >= 0) printf("F");
        else printf("Invalid grade");
        break;
    }
    printf("\n");
    return 0;
}