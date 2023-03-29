# include "main.h"
/**
 * _strncpy - function
 * @dest: input
 * @src: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = src;
	int z, j;

	z = 0;
	while (*p != '\0')
	{
		p++;
	}
	j = p - src;

	if (n > j)
	{
		while (z < n)
		{
			if (z < j)
				*(dest + z) = *(src + z);
			else
				*(dest + z) = '\0';
			z++;
		}
	}
	else
	{
		while (z < n)
		{
			*(dest + z) = *(src + z);
			z++;
		}
	}
	return (dest);
}
