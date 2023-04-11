# include <stdio.h>
# include <stdlib.h>
# include "main.h"
/**
 * argstostr - FUNCT
 * @ac: input
 * @av: input
 * Return: ptr
 */

char *argstostr(int ac, char **av)
{
	int i, j, z, len;
	char *ptr = NULL;
	char *v = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = z = 0;
	for (i = 1; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len = len + ac + 1;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		v = av[i];
		for (j = 0; v[j] != '\0'; j++)
		{
			ptr[z] = v[j];
			z++;
		}
		if (i != ac - 1)
			ptr[z] = '\n';
		z++;
	}
	ptr[z] = '\0';

	return (ptr);
}
/**
 * _strlen - funct
 * @s: input
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
