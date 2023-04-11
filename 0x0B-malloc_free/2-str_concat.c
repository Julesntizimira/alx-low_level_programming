# include <stdio.h>
# include "main.h"
# include <stdlib.h>
/**
 * str_concat - funct
 * @s1: input
 * @s2: input
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int len1, len2, len3, i;

	i = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len3 = len1 + len2 + 1;
	ptr = malloc(len3 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (i < len1)
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (i < len2)
		{
			ptr[len1 + i] = s2[i];
			i++;
		}
	}
	ptr[len3 - 1] = '\0';

	return (ptr);

}
/**
 * _strlen - funct
 * @s: input
 * Return: int
 */

int _strlen(char *s)
{
	char *p = s;
	int len = 0;

	if (s == NULL)
		return (0);
	while (*p != '\0')
	{
		p++;
		len++;
	}
	return (len);
}
