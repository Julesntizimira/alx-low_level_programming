# include "main.h"
# include <stddef.h>
/**
 * *_strstr - memset funct
 * @needle: input
 * @haystack: input
 * Return: i
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (haystack == NULL)
	{
		return (NULL);
	}

	if (needle == NULL)
	{
		return (haystack);
	}

	for (i = 0; needle[i] != '\0'; i++)
	{

		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (haystack + j);

			}
		}

	}
	return (NULL);
}
