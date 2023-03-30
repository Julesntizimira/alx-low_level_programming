# include "main.h"
/**
 * cap_string - function
 * @s: input
 * Return: string
 */

char *cap_string(char *s)
{
	char k;
	int j, y;

	y = 32;
	for (j = 0; *(s + j) != '\0'; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			if (s[j - 1] == ' ' || s[j - 1] == '\t' ||
			s[j - 1] == '.' || s[j - 1] == '\n' ||
			s[j - 1] == '{' || s[j - 1] == ';' ||
			s[j - 1] == ',' || s[j - 1] == '?' ||
			s[j - 1] == ')' || s[j - 1] == '(' ||
			s[j - 1] == '}' || s[j - 1] == '"' ||
			s[j - 1] == '!')
			{
				k = s[j] - y;
				s[j] = k;
			}
		}
	}
	return (s);
}
