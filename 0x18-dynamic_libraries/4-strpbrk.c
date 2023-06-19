# include "main.h"
# include <stddef.h>
/**
 * _strpbrk - memset funct
 * @s: input
 * @accept: input
 * Return: i
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, z, j, k;

	k = 0;
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		z = k;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = k + 1;
				break;
			}
		}
		if (k != z)
			return (s + i);
	}
	return (NULL);
}
