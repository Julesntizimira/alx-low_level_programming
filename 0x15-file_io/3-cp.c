# include "main.h"
# include <stdio.h>
/**
 * _strlen - funct
 * @s: input
 * Return: len;
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
 * error_3 -funct
 * @n: input
 */
void error_3(int n)
{
	int i = 0, j = 0;
	char buff[1024];
	char *str = "Error: Can't close fd ";

	write(STDERR_FILENO, str, _strlen(str));
	do {
		i = n / 10;
		buff[j] = n % 10;
		n = i;
		j++;
	} while (n > 0);
	write(STDERR_FILENO, buff, j);
	write(STDERR_FILENO, "\n", 1);
}
/**
 * error_2 -funct
 * @s: input
 */
void error_2(char *s)
{
	char *str = "Error: Can't write to ";

	write(STDERR_FILENO, str, _strlen(str));
	write(STDERR_FILENO, s, _strlen(s));
	write(STDERR_FILENO, "\n", 1);
}
/**
 * error_1 -funct
 * @s: input
 */
void error_1(char *s)
{
	char *str = "Error: Can't read from file ";

	write(STDERR_FILENO, str, _strlen(str));
	write(STDERR_FILENO, s, _strlen(s));
	write(STDERR_FILENO, "\n", 1);
}
/**
 * main - funct
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char *argv[])
{
	char *str1 = "Usage: cp file_from file_to\n";
	char *file_from = argv[1], *file_to = argv[2];
	char buff[1024];
	int fc, fr, i, j, z;

	if (argc != 3)
	{
		write(STDERR_FILENO, str1, _strlen(str1));
		exit(97);
	}
	fr = open(file_from, O_RDONLY);
	if (fr == -1)
	{
		error_1(file_from);
		exit(98);
	}
	fc = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fc == -1)
	{
		error_2(file_to);
		exit(99);
	}
	while ((z = read(fr, buff, 1024) > 0))
	{
		dprintf(fc, "%s", buff);
	}
	i = close(fr);
	if (i == -1)
	{
		error_3(fr);
		exit(100);
	}
	j = close(fc);
	if (j == -1)
	{
		error_3(fc);
		exit(100);
	}
	return (0);
}
