#include "main.h"

/**
 * _isupper - printing the upper
 *
 * @c: inputs
 * Return: 1 and 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
