# include "main.h"
/**
 * string_toupper - function
 * @s: input
 * Return: string
 */

char *string_toupper(char *s)
{
	char k;
	int j, y;

	y = 32;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			k  = s[j] - y;
			s[j] = k;
		}
	}
	return (s);
}
