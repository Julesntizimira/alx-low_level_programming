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
	char c = '\0';
	char *s = NULL;
	void *ptr = NULL;
	unsigned int i = 0;
	unsigned int k;


	k = nmemb * size;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(k);
	if (ptr == NULL)
		return (NULL);
	s = (char *) ptr;
	while (i < k)
	{
		s[i] = c;
		i++;
	}
	return (ptr);
}
