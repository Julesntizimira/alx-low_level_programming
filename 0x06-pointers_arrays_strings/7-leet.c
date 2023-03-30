# include "main.h"


/**
 * leet - check the code for
 *
 * @s: hello
 * Return: Always s
 */


char *leet(char *s)
{
	char *result = s;
	int i, k, j;

	char replacements[] = {'4', '3', '0', '7', '1'};

	for (i = 0, j = 0; s[i] != '\0'; i++, j++)
	{
		result[j] = s[i];
		k = 0;
		while (k < 5 && (s[i] != "aeotlAEOTL"[k]))
		{
			k++;
		}
		if (k < 5)
		{
			result[j] = replacements[k];
		}
	}
	return (result);
}