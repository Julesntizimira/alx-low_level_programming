#include <stdio.h>
#include "main.h"

/**
 * print_buffer - funct
 * @b: input
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int i, j;

	printf("0");
	printf("        ");
	for (i = 0; i < 10; i++)
	{
		printf("%02x ", i);
	}
	printf("\n");
	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf(" %02x", b[j]);
			else
				printf("   ");
		}
		printf(" ");
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] < 32 || b[j] > 126)
					printf(".");
				else
					printf("%c", b[j]);
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
