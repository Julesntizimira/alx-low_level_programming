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
	int len1, len2, sum, carry, j;
	char *v = n1, *s = n2;

	sum = carry = len1 = len2 = j = 0;
	while (*v != '\0')
	{
		v++;
		len1++;
	}
	while (*s != '\0')
	{
		s++;
		len2++;
	}
	len1 -= 1;
	len2 -= 1;
	while (len1 >= 0 || len2 >= 0 || carry)
	{
		sum = carry;
		if (len1 >= 0)
		{
			sum += (n1[len1] - '0');
			len1--;
		}
		if (len2 >= 0)
		{
			sum += (n2[len2] - '0');
			len2--;
		}
		if (j >= size_r - 1)
			return (0);
		carry = sum / 10;
		r[j] = sum % 10 + '0';
		j++;
	}
	r[j] = '\0';
	return (_rev1(r, j));
}
/**
 * _rev1 - funct
 * @p: input
 * @k: input
 * Return: pointer
 */
char *_rev1(char *p, int k)
{
	int i, m;

	i = 0;
	m = 0;

	k -= 1;
	while (k > i)
	{
		m = p[i];
		p[i] = p[k];
		p[k] = m;
		i++;
		k--;
	}
	return (p);
}
