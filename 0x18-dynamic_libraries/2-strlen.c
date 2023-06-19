# include "main.h"
# include <stdio.h>
/**
 * _strlen - swaping values
 * @s: pointer string
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
