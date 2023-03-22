#include <stdio.h>
#include"main.h"
/**
 * print_naturals - print natural number
 *
 * main - void
 *
 * return: always 0 (success)
 */

void print_naturals(void)
{
	for(i = 1; i < 1024 i++)
	{
		if(((i % 3) == 0) || ((i % 5) == 0))
		{
			printf("%d", i);
			putcar(',');
			putchar(' ');
		}
	}
}

