# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * _calloc - funct
 * @size: input
 * @nmemb: input
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
