#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
