#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * jack_bauer - checks for lowercase
 */

void jack_bauer(void)
{
	int i, j, k, z;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j < 10; j++)
		{
		       	for (k = 0; k < 6; k++)
			{
				 for (z = 0; z < 10; z++)
				 {
					 while (((i != 2) && (j != 4)) && ((k != 0) && (z != 0)))
                                         {
					 _putchar(i + '0');
					 _putchar(j + '0');
					 _putchar(':');
					 _putchar(k + '0');
					 _putchar(z + '0');
					 _putchar('\n');
					 }
				 }
			}
		}
	}
}

