# include "main.h"
/**
 * get_endianness - function
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((*c) ? 1 : 0);
}
