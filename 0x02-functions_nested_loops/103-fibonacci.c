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
        long unsigned z, k, j, w, y;

        z = 1;
        k = 2;
	y = 0;
        for (j = 1; j <= 50; j++)
        {
                printf("%lu", z);
                printf(", ");
		y = y + z;
		if (y > 4000000)
			break;
                w = z + k;
                z = k;
                k = w;
        }
	putchar('\n');

	printf("%lu", y);

        putchar('\n');
}
