# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * string_nconcat - funct
 * @s1: input
 * @s2: input
 * @n: input
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3, i, j;
	char *ptr = NULL;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	len3 = len1 + n + 1;
	ptr = malloc(len3 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; j < n; j++)
		{
			ptr[len1 + j] = s2[j];
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

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
