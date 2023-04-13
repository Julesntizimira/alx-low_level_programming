#include <stdio.h>

/**
 * main - void function
 * @i: input
 * @j: input
 * @n: input
 * Return: always return 0 (success)
 */
void fib(unsigned long int n, unsigned long int i, int j);

int main(void)
{
	fib(2, 1, 1);
	printf("\n");

	return	(0);
}
/**
 * fib - a void function
 * @i: input
 * @j: input
 * @n: input
 */
void fib(unsigned long int n, unsigned long int i, int j)
{
	if (j <= 98)
	{
		printf(", ");
		printf("%lu", n);
		fib(n + i, n, j + 1);
	}
}
