#include <stdio.h>
#include <ctype.h>

int main() {
    int h, m;
    char c;
    int dep1 = 480, dep2 = 583, dep3 = 679, dep4 = 767, dep5 = 840, dep6 = 945, dep7 = 1140, dep8 = 1305, dep_input;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d %c", &h, &m, &c);
    if (toupper(c) == 'P') dep_input += 720; 
    dep_input += h * 60 + m;
    printf("Closest departure time is ");
    if (dep_input <= dep1) printf("8:00 a.m., arriving at 10:16 a.m.");
    else if (dep_input <= dep2) {
        if (dep2 - dep_input >= dep_input - dep1) printf("8:00 a.m., arriving at 10:16 a.m.");
        else printf("9:43 a.m., arriving at 11:52 a.m.");
    } else if (dep_input <= dep3) {
        if (dep3 - dep_input >= dep_input - dep2) printf("9:43 a.m., arriving at 11:52 a.m.");
        else printf("11:19 a.m., arriving at 1:31 p.m.");
    } else if (dep_input <= dep4) {
        if (dep4 - dep_input >= dep_input - dep3) printf("11:19 a.m., arriving at 1:31 p.m.");
        else printf("12:47 p.m., arriving at 3:00 p.m.");
    } else if (dep_input <= dep5) {
        if (dep5 - dep_input >= dep_input - dep4) printf("12:47 p.m., arriving at 3:00 p.m.");
        else printf("2:00 p.m., arriving at 4:08 p.m.");
    } else if (dep_input <= dep6) {
        if (dep6 - dep_input >= dep_input - dep5) printf("2:00 p.m., arriving at 4:08 p.m.");
        else printf("3:45 p.m., arriving at 5:55 p.m.");
    } else if (dep_input <= dep7) {
        if (dep7 - dep_input >= dep_input - dep6) printf("3:45 p.m., arriving at 5:55 p.m.");
        else printf("7:00 p.m., arriving at 9:20 p.m.");
    } else {
        if (dep8 - dep_input >= dep_input - dep7) printf("7:00 p.m., arriving at 9:20 p.m.");
        else printf("9:45 p.m., arriving at 11:58 p.m.");
    }
    printf("\n");
    return 0;
}