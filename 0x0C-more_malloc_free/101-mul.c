# include <stdio.h>
# include <stdlib.h>
# include "main.h"
/**
 * get_number_of_digits - funct
 * @num: input
 * Return: ptr
 */
int get_number_of_digits(char *num)
{

	int count = 0;

	while (*num != '\0')
	{
		count++;
		num++;
	}
	return (count);
}
/**
 * mul - funct
 * @num1: input
 * @num2: input
 * Return: ptr
 */
char *mul(char *num1, char *num2)
{
	int len1 = get_number_of_digits(num1);
	int len2 = get_number_of_digits(num2);
	int len3 = len1 + len2;
	int i, j, k, carry, sum;

	char *result = malloc(sizeof(char) * (len3 + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; i < len3; i++)
		result[i] = '0';
	result[len3] = '\0';
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1, k = i + j + 1; j >= 0; j--, k--)
		{
			sum = carry + (num1[i] - '0') * (num2[j] - '0') + (result[k] - '0');
			result[k] = (sum % 10) + '0';
			carry = sum / 10;
		}
		result[k] += carry;
	}
	while (*result == '0' && *(result + 1) != '\0')
	{
		result++;
	}
	return (result);
}
/**
 * main - funct
 * @argc: input
 * @argv: input
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int j, i;
	char *result, *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; i < 2; i++)
	{
		j = 0;

		while (*(argv[i + 1] + j) != '\0')
		{
			if (*(argv[i + 1] + j) < '0' || *(argv[i + 1] + j) > '9')
			{
				printf("Error\n");
				return (98);
			}
			j++;
		}
	}
	result = mul(num1, num2);
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}
	i = 0;
	while (result[i] != '\0')
	{
		_putchar(result[i]);
		i++;
	}
	_putchar('\n');

	free(result);
	return (0);
}
