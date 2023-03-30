# include "main.h"
/**
 * infinite_add - func
 * @n1: input
 * @n2: input
 * @r: in
 * @size_r: in
 * Return: res
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int len1 = 0, len2 = 0, i, max_len, carry = 0;

	while (n1[len1])
	{
		len1++;
	}
	while (n2[len2])
	{
		len2++;
	}
	max_len = len1 > len2 ? len1 : len2;
	if (max_len + 1 >= size_r)
	{
		return (0);
	}
	for (i = 1; i <= max_len; i++)
	{
		int digit1 = i <= len1 ? n1[len1 - i] - '0' : 0;

		int digit2 = i <= len2 ? n2[len2 - i] - '0' : 0;

		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		r[max_len - i + 1] = sum % 10 + '0';
	}
	if (carry > 0)
	{
		r[0] = carry + '0';
		r[max_len + 1] = '\0';
	}
	else
	{
		r[max_len] = '\0';
	}
	return (r);
}
