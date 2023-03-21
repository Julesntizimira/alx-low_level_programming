#include <stdio.h>
/**
 * a function that prints the alphabet, in lowercas
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
