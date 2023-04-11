# include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - funct
 * @size: input
 * @c: input
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;

	ptr = malloc(size * sizeof(char));
	ptr[0] = c;
	return (ptr);
	free(ptr);
}
