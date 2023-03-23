#include <stdio.h>
#include "main.h"

/**
 * main - void function
 *
 * Return: always return 0 (success)
 */
void fib(void);

int main (void)
{
	fib();
	return(0);
}
void fib(void)
{
	unsigned long j, k, z, w;
	z = 1;
	k = 2;
	for ( j = 1; j <= 50; j++)
	{
	
		printf("%lu", z);
		if (j == 50)
			break;
		printf(", ");
		w = z + k;
		z = k;
		k = w;
	}
	putchar('\n');
}
