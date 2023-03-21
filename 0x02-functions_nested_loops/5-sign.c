#include <stdio.h>
/**
 * rint_sign - checks for lowercase
 * @n: is an argument of type int
 * Returns: 1 and prints + if n is greater than zero
 * Returns: 0 and prints 0 if n is zero
 * Returns: -1 and prints - if n is less than zeroe
 */
int print_sign(int n) {
    int sign;
    int magnitude = 0;
    int i;

    if (n > 0) {
        sign = 1;
    } else if (n == 0) {
        putchar('0');
        return 0;
    } else {
        sign = -1;
        putchar('-');
    }

    for (i = n; i != 0; i /= 10) {
        magnitude = (magnitude * 10) + (i % 10);
    }

    while (magnitude != 0) {
        putchar((magnitude % 10) + '0');
        magnitude /= 10;
    }

    return sign;
}

