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
	char *v = dest;
	char *p = src;
	int z, i, j;

	while (*p != '\0')
	{
		p++;
	}
	j = p - src;

	while (*v != '\0')
	{
		v++;
	}
	i = v - dest;
	if (j < n)
	{
		for (z = 0; z < j; z++)
		{
			*(dest + i) = *(src + z);
			i++;
		}
	}
	else if (j >= n)
	{
		for (z = 0; z < n; z++)
		{
			*(dest + i) = *(src + z);
			i++;
		}
	}
	return (dest);
}
