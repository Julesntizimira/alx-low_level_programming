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
	unsigned int i, j, z, k;
	char *s = haystack;
	char *v = needle;

	z = 0;
	k = 0;


	while (*s != '\0')
	{
		s++;
		z++;
	}
	while (*v != '\0')
	{
		v++;
		k++;

	}

	if (haystack == NULL)
	{
		return (NULL);
	}

	if (needle == NULL)
	{
		return (haystack);
	}

	for (i = 0; i < k; i++)
	{

		for (j = 0; j < z; j++)
		{
			if (*(needle + i) == *(haystack + j))
			{
				return (haystack + j);

			}
		}

	}
	return (NULL);
}
