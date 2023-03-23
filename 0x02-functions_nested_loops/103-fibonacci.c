#include "main.h"
#include <stdio.h>

/**
 * main - void function
 *
 * Return: always return 0 (success)
 */
void fibona(void);
int main(void)
{
	fibona();
	return  (0);
}
/**
 * fibona - a void function
 */
void fibona(void)
{
	unsigned long z, w, k, y, j;

	z = 1;
	k = 2;
	y = 0;
	for (j = 1; j <= 50; j++)
	{
		w = z + k;
		if ((z % 2) == 0)
		{
			y = y + z;
			if (y > 4000000)
				break;
		}
		z = k;
		k = w;
	}
	printf("%lu", y);
	putchar('\n');
}
