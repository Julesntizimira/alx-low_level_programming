# include "main.h"
# include <stddef.h>
/**
 * _strspn - memset funct
 * @s: input
 * @accept: input
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, z, j, k;

	k = 0;
	if ((s == NULL) || (accept == NULL))
	{
		return (0);
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
		if (k == z)
			break;
	}
	return (k);
}
