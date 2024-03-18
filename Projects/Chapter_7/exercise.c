#include <stdio.h>

int main(void) {
    typedef __int8_t Int8;
    typedef __int16_t Int16;
    typedef __int32_t Int32;
    Int8 a = 12;
    Int16 b = 13;
    Int32 c = 5;
    printf("%ld\n", sizeof(a));

    printf("%ld\n", sizeof(b));

    printf("%ld\n", sizeof(c));
    return 0;
}