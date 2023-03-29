# include "main.h"
/**
 * _strncpy - function
 * @dest: input
 * @src: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *v = dest;
	char *p = src;
	int z, j, i;

	z = 0;
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

	if (n > j)
	{
		while (z < n)
		{
			if (z > i)
				break;
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
			if (z > i)
				break;
			*(dest + z) = *(src + z);
			z++;
		}
	}
	return (dest);
}
