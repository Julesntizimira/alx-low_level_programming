# include "main.h"

/**
 * rot13 - function
 * @str: string
 * Return: str
 */


char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			str[i] = c + 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			str[i] = c - 13;
		}
	}
	return str;
}
