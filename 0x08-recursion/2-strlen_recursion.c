# include "main.h"
/**
 * _strlen_recursion - funct
 * @s: input
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int len;
	char *v = s;

	len = 0;

	if (*v == '\0')
		return (0);
	len = len + _strlen_recursion(v + 1);
	len++;

	return (len);

}
