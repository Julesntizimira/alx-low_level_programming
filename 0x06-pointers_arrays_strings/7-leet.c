# include "main.h"


/**
 * leet - check the code for
 *
 * @s: hello
 * Return: Always s
 */


char *leet(char *s)
{
	int i, j;
	char n1[] = "aAeEoOtTlL";
	char n2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; n1[j] != '\0'; j++)
		{
			if (s[i] == n1[j])
			{
				s[i] = n2[j];
			}


		}
	}
	return (s);
}
