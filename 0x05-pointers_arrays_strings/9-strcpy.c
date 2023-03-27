# include "main.h"
# include <stdio.h>
/**
 * _strcpy - print in reverse
 *
 * @src: str
 * @dest: str
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_orig = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest_orig);
}
