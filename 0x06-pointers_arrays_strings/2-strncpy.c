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

	while (*p != '\0')
	{
		p++;
	}
	j = p - src;

	if (n <= j)
	{
		for (z = 0; z < n; z++)
		{
			*(dest + z) = *(src + z);
		}
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			*(dest + z) = *(src + z);
			if (z > j)
				break;
		}
	}
	return (dest);
}
