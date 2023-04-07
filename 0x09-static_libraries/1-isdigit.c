#include "main.h"

/**
 * _isdigit - printing the upper
 *
 * @c: inputs
 * Return: 1 and 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
