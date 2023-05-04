# include "main.h"
/**
 * _pow - function to culculate power
 * @a: input
 * @b: input
 * Return: powr
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	unsigned int i = 0, powr = 1;

	if (b == 0)
		return (1);
	while (i < b)
	{
		powr = powr * a;
		i++;
	}
	return (powr);
}
/**
 * _strlen - function to culculate length of str
 * @s: input string
 * Return: length of str
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
/**
 * binary_to_uint - function to convert binary to Uint
 * @b: input binary number
 * Return: number in decimal uint
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0, j = 0, idx = 0;
	unsigned int sum = 0;
	char buff[33] = {'\0'};
	char temp;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (!(b[i] == '1' || b[i] == '0'))
		{
			return (0);
		}
		buff[idx] = b[i];
		i++;
		idx++;
	}
	len = _strlen(buff);
	len--;
	while (j < len)
	{
		temp = buff[j];
		buff[j] = buff[len];
		buff[len] = temp;
		len--;
		j++;
	}
	len = _strlen(buff);
	len--;
	while (len >= 0)
	{
		sum += (buff[len] - '0') * (_pow(2, len));
		len--;
	}
	return (sum);
}
