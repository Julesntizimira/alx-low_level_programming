# include "main.h"
# include <stdio.h>
/**
 * _atoi - print in reverse
 *
 * @s: str
 *
 * Return: dest
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return sign * result;
}