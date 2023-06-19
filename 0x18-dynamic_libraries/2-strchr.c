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

	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
			return (s);

		s++;
	}
	if (c == '\0')
	{
		return (s);
	}



	return (NULL);
}
