# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * _realloc - funct
 * @ptr: input void poiter
 * @old_size: input
 * @new_size: input
 * Return: p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	free(ptr);

	return (p);
}
