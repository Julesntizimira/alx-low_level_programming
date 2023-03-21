#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the alphabet
 */

void print_alphabet_x10(void)
{
	
        int i, j;
	j = 0;

	while (j < 10)
	{
		for (i = 97; i <= 122; i++)
		{
                putchar(i);
		}
		putchar('\n');
		j++;
	}
}
