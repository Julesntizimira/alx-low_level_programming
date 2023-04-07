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

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) != *(needle + j))
			{
				break;
			}
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
