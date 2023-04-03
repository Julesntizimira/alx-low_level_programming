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
	unsigned int i, z, j, k;

	k = 0;
	if (needle == NULL)
	{
		return (haystack);
	}

	for (i = 0; needle[i] != '\0'; i++)
	{
		z = k;
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				k = k + 1;
				break;
			}
		}
		if (k != z)
			return (haystack + j);
	}
	return (NULL);
}
