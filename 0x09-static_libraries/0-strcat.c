# include "main.h"
/**
 * _strcat - function
 *
 * @dest: input
 * @src: input
 *
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
	char *n = src;
	char *p = dest;
	int i, z, j;

	while (*n != '\0')
	{
		n++;
	}
	i = n - src;
	while (*p != '\0')
	{
		p++;
	}
	j = p - dest;
	for (z = 0; z <= i; z++)
	{
		*(dest + j) = *(src + z);
		j++;
	}
	return (dest);
}
