# include "main.h"

/**
 * _strcmp - function
 *
 * @s1: input
 * @s2: input
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; (*(s1 + i) != '\0' || *(s2 + i) != '\0'); i++)
	{
		sum += *(s1 + i) - *(s2 + i);
		if (*(s1 + i) - *(s2 + i) != 0)
			break;
	}
	return (sum);
}
