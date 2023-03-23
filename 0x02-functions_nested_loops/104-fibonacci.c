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
      
	long unsigned z, k, j, w;
        z = 1;
        k = 2;
        for (j = 1; j <= 98; j++)
        {
                printf("%lu", z);
                printf(", ");
                w = z + k;
                z = k;
                k = w;
        }
        putchar('\n');
}
