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
		str[i] = ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M')) ? c + 13 :
			((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z')) ? c - 13 :
			c;
	}
	return (str);
}
