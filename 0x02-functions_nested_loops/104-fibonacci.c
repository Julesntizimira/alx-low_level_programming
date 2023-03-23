#include <stdio.h>
#include "main.h"

/**
 * main - void function
 *
 * Return: always return 0 (success)
 */
void fib(void);

int main(void)
{
        fib();
        return  (0);
}
/**
 * fib - a void function
 */
void fib(void)
{
       int z, k, j, w;
        z = 1;
        k = 2;
        for (j = 1; j <= 98; j++)
        {
                printf("%d", z);
                if (j == 98)
                        break;
                printf(", ");
                w = z + k;
                z = k;
                k = w;
        }
        putchar('\n');
}
