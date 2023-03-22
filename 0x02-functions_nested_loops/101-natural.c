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
	int i, j;

	for (i = 1; i < 1024; i++) 
	{
		if(((i % 3) == 0) || ((i % 5) == 0))
		{
			j *= i;
		}
		
	}
	printf("%d", j);
	putchar('\n');
}
int main(void)
{
	 print_naturals();
	 return (0);

}
