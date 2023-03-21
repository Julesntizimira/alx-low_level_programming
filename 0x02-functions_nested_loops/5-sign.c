#include <stdio.h>
/**
 * rint_sign - checks for lowercase
 * @n: is an argument of type int
 * Returns: 1 and prints + if n is greater than zero
 * Returns: 0 and prints 0 if n is zero
 * Returns: -1 and prints - if n is less than zeroe
 */

int print_sign(int n) 
{
    if (n > 0)
    {
        putchar('+');
        return 1;
    } else if (n == 0) 
    {
        putchar('0');
        return 0;
    }
    else
    {
        putchar('-');
        return -1;
    }
}


