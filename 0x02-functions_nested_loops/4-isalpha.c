#include <stdio.h>
/**
 * _isalpha - checks for lowercase
 * @c: is an argument of type int
 * Return: 1 if true is lowercase and 0 otherwise
 */
int _isalpha(int c)
{

        if ((c	>=	97)     &&      (c      <=      122))	||	((c	>=	65)	&&	(c	<=	90))
        {
                return (1);
        }
        else
                return (0);
}
