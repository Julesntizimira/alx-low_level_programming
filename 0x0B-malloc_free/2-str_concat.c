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
	char *ptr = NULL, *v1 = s1, *v2 = s2;
	int len1, len2, len3, i;

	len1 = len2 = i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return (s2);
	if (s2 == NULL && s1 != NULL)
		return (s1);

	while (*v1 != '\0')
	{
		v1++;
		len1++;
	}
	while (*v2 != '\0')
	{
		v2++;
		len2++;
	}
	len3 = len1 + len2 + 1;
	ptr = malloc(len3 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len2)
	{
		ptr[len1 + i] = s2[i];
		i++;
	}
	return (ptr);

}
