# include "main.h"
# include <stddef.h>
/**
 * _strchr - memset funct
 * @s: input
 * @c: input
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i, j;
	char *n = s;

	while (*n != '\0')
	{
		n++;
		j++;
	}

	for (i = 0; i < j; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
