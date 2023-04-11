# include "main.h"
# include <stdlib.h>
# include <stdio.h>
/**
 * strtow - funct
 * @str: input
 * Return: ptr
 */
char **strtow(char *str)
{

	int count, word_len, i, j;
	char **words;
	char *a, *z, *v;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = 0;
	for (v = str; *v != '\0'; v++)
	{
		if (*v != ' ' && (*(v - 1) == ' ' || v == str))
			count++;
	}
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	a = str;
	for (i = 0; i < count; i++)
	{
		while (*a == ' ')
			a++;
		z = a;
		while (*z != ' ' && *z != '\0')
			z++;
		word_len = z - a;
		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_len; j++)
			words[i][j] = a[j];
		words[i][word_len] = '\0';
		a = z;
	}
	words[count] = NULL;
	return (words);
}

