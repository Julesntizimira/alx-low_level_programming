# include "main.h"

/**
 * _strncat - function
 *
 * @dest: input
 * @src: input
 *
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int z, j;

	while (*p != '\0')
	{
		p++;
	}
	j = p - dest;
	for (z = 0; z <  n; z++)
	{
		*(dest + j) = *(src + z);
		j++;
	}
	return (dest);
}
