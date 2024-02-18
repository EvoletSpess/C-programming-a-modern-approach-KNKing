#include <stdio.h>

int main() {
    int m1, d1, y1, m2, d2, y2, total1 = 0, total2 = 0, leap_year1, leap_year2;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);
    y1 += 2000;
    y2 += 2000;
    leap_year1 = (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0);
    leap_year2 = (y2 % 4 == 0 && y2 % 100 != 0 || y2 % 400 == 0);
    y1 -= 2000;
    y2 -= 2000;

    if (m1 == 1) total1 = d1;
    else if (m1 == 2) total1 = d1 + 31;
    else if (m1 == 3) total1 = d1 + 59 + leap_year1;
    else if (m1 == 4) total1 = d1 + 90 + leap_year1;
    else if (m1 == 5) total1 = d1 + 120 + leap_year1;
    else if (m1 == 6) total1 = d1 + 151 + leap_year1;
    else if (m1 == 7) total1 = d1 + 181 + leap_year1;
    else if (m1 == 8) total1 = d1 + 212 + leap_year1;
    else if (m1 == 9) total1 = d1 + 243 + leap_year1;
    else if (m1 == 10) total1 = d1 + 273 + leap_year1;
    else if (m1 == 11) total1 = d1 + 304 + leap_year1;
    else if (m1 == 12) total1 = d1 + 334 + leap_year1;

    if (m2 == 1) total2 = d2;
    else if (m2 == 2) total2 = d2 + 31;
    else if (m2 == 3) total2 = d2 + 59 + leap_year2;
    else if (m2 == 4) total2 = d2 + 90 + leap_year2;
    else if (m2 == 5) total2 = d2 + 120 + leap_year2;
    else if (m2 == 6) total2 = d2 + 151 + leap_year2;
    else if (m2 == 7) total2 = d2 + 181 + leap_year2;
    else if (m2 == 8) total2 = d2 + 212 + leap_year2;
    else if (m2 == 9) total2 = d2 + 243 + leap_year2;
    else if (m2 == 10) total2 = d2 + 273 + leap_year2;
    else if (m2 == 11) total2 = d2 + 304 + leap_year2;
    else if (m2 == 12) total2 = d2 + 334 + leap_year2;

    if (y1 == y2) {
        if (total1 > total2) printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);
        else if (total1 < total2) printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1, d1, y1, m2, d2, y2);
        else printf("You have entered the same date.");
    } else if (y1 < y2) printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m1, d1, y1, m2, d2, y2);
    else printf("%d/%d/%.2d is earlier than %d/%d/%.2d", m2, d2, y2, m1, d1, y1);
    printf("\n");
}