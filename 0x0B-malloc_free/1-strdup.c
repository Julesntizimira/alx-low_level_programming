# include <stdio.h>
# include "main.h"
# include <stdlib.h>
/**
 * _strdup - funct
 * @str: input
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr = NULL;
	char *s = str;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	len++;

	ptr = malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	i = 0;

	while (i < len)
	{
		ptr[i] = str[i];
		i++;

	}
	return (ptr);

}
