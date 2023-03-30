# include "main.h"

/**
 * rot13 - function
 * @str: string
 * Return: str
 */


char *rot13(char *str)
{
	int i, j;
	
	const char *s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	const char *v = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";



	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; s[j] != '\0'; j++)
		{
			if(str[i] == s[j])
			{

				str[i] = v[j];


			}
		}
	}

	return(str);
}
