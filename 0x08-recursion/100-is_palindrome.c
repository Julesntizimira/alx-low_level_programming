# include "main.h"

/**
 * is_palindrome - funct
 * @m: input
 * Return: 0,1
 */


char *help1(char *m);
int help2(char *w, char *v);

int is_palindrome(char *s)
{
	char *r = s;
	char *p = s;

	if (*s == '\0')
		return (1);
	return (help2(p, help1(r)));

}
/**
 * help1 - funct
 * @m: input
 * Return: 0,1
 */
char *help1(char *m)
{

	if (*m != '\0')
	{
		return (help1(m + 1));

	}
	return (m - 1);

}
/**
 * help2 - funct
 * @w: input
 * @v: input
 * Return: 0,1
 */
int help2(char *w, char *v)
{
	if (*w != *v)
		return (0);
	if (w >= v)
		return (1);
	return (help2((w + 1), (v - 1)));

}
