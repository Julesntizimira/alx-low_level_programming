# include <stdio.h>
# include "main.h"
# include <stdlib.h>
/**
 * create_array - funct
 * @size: input
 * @c: input
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
