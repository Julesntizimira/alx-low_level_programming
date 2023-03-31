#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints the content of size bytes of a buffer
 * @b: the buffer to print
 * @size: the number of bytes to print from the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", *(b + j));
			else
				printf("  ");
			if (j % 2 != 0)
				printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;
			if (*(b + j) >= 32 && *(b + j) <= 126)
				printf("%c", *(b + j));
			else
				printf(".");
		}
		printf("\n");
	}
}
